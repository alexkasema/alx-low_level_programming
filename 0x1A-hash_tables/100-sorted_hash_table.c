#include "hash_tables.h"

/**
 * shash_table_create - Creates a hash table.
 * @size: Size of the table
 *
 * Return: Pointer to created hash table.
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int i;

	if (size < 1)
	{
		perror("Size must be greater than 0\n");
		return (NULL);
	}

	new = malloc(sizeof(shash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;

	new->array = malloc(sizeof(shash_node_t *) * size);
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	new->shead = NULL;
	new->stail = NULL;

	for (i = 0; i < size; i++)
		new->array[i] = NULL;

	return (new);
}

/**
 * shash_table_set - Inserts a node at the the sorted hash table
 * @ht: Pointer to the hash table
 * @key: Key corresponding to the value
 * @value: The data of the node.
 *
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new;
	unsigned long int index;
	int check;

	if (ht == NULL || ht->array == NULL || ht->size < 1 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	check = key_check_s(ht, key, value, index);
	if (check == 1)
		return (1);
	if (check == -1)
		return (0);

	new = create_node_s(key, value);
	if (new == NULL)
		return (0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
	}
	else
	{
		new->next = ht->array[index];
		ht->array[index] = new;
	}

	check = insert_doubly_ll(ht, new);
	if (check == -1)
		return (0);

	return (1);
}

/**
 * shash_table_get - gets an item from the hash table
 * @ht: Pointer to hash table
 * @key: The key to search for
 * Return: corresponding value of the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;

	if (ht == NULL || ht->shead == NULL)
		return (NULL);

	current = ht->shead;
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->snext;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints elements in the hash table
 * @ht: Pointer to hash table
 * Return: Nothing
 */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 0;

	if (ht == NULL || ht->shead == NULL)
		return;

	current = ht->shead;
	printf("{");

	while (current)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Print elements of a hash table in reverse
 * @ht: Pointer to hash table.
 * Return: Nothing
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 0;

	if (ht == NULL || ht->stail == NULL)
		return;

	current = ht->stail;
	printf("{");
	while (current)
	{
		if (flag)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 1;
		current = current->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table
 * @ht: Pointer to hash table
 * Return: Nothing
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
		return;

	if (ht-> size < 1 || ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			current = ht->array[i];
			ht->array[i] = current->next;
			free(current->key);
			free(current->value);
			free(current);
		}
	}
	free(ht->array);
	free(ht);
}

/**
 * create_node - creates a new node to be added in the hash table.
 * @key: Key to the value.
 * @value: Value to be added to the node
 *
 * Return: A pointer to the created node
 */

shash_node_t *create_node_s(const char *key, const char *value)
{
	shash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);
	if (new->key == NULL)
		return (NULL);

	new->value = strdup(value);
	if (new->value == NULL)
		return (NULL);

	new->next = NULL;

	return (new);
}

/**
 * key_check - Checks if the key(new node) already exists and if yes update it.
 * @ht: Pointer to the hash table containing the node.
 * @key: key to the node.
 * @value: data of the node.
 * @index: The index of the node in the array.
 *
 * Return: 1 if the node already exists and it got updated, -1 if the node,
 * data couldn't be updated, 0 if the node doesn't exist in the hash table.
 */

int key_check_s(shash_table_t *ht, const char *key, const char *value,
			unsigned long int index)
{
	shash_node_t *current = ht->array[index];
	char *updated_value;

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			updated_value = strdup(value);
			if (updated_value == NULL)
				return (-1);
			free(current->value);
			current->value = updated_value;
			return (1);
		}
		current = current->next;
	}

	return (0);
}

/**
 * insert_doubly_ll - Add a node to a doubly linked list
 * @ht: Pointer to hash table.
 * @new: Pointer to node to insert to the list
 * Return: 0 on success else -1
 */

int insert_doubly_ll(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *current;


	if (ht->shead == NULL || strcmp(new_node->key, ht->shead->key) < 0)
	{
		new_node->snext = ht->shead;
		if (ht->shead)
			ht->shead->sprev = new_node;
		ht->shead = new_node;
		if (ht->stail == NULL)
			ht->stail = new_node;
	}

	else
	{
		current = ht->shead;
		while (current->snext != NULL &&
			strcmp(new_node->key, current->snext->key) >= 0)
			current = current->snext;

		new_node->sprev = current;
		new_node->snext = current->snext;
		if (current->snext != NULL)
			current->snext->sprev = new_node;
		current->snext = new_node;

		if (new_node->snext == NULL)
			ht->stail = new_node;
	}

	return (0);
}
