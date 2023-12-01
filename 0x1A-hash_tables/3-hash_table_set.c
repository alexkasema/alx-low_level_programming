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
