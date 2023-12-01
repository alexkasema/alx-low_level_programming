#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: Pointer to the created table
 * @key: The key to index that will relate to a value.
 * @value: The value of a key.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;
	int check;

	if (ht == NULL || key == NULL || strlen(key) == 0 ||
		ht->array == NULL || value == NULL || ht->size < 1)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* check if key exists and if so update its value*/
	check = key_check(ht, key, value, index);
	if (check == 1)
		return (1);
	else if (check == -1)
		return (0);

	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	if (ht->array[index] == NULL)
		ht->array[index] = new_node;
	else
	{
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}

/**
 * create_node - creates a new node to be added in the hash table.
 * @key: Key to the value.
 * @value: Value to be added to the node
 *
 * Return: A pointer to the created node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new;

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

int key_check(hash_table_t *ht, const char *key, const char *value,
		unsigned long int index)
{
	hash_node_t *current = ht->array[index];
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
