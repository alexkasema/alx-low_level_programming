#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: Pointer to the hash table.
 * Return: nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i, flag = 0;

	if (ht != NULL && ht->array != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				flag = 1;
				current = current->next;
			}
		}
		printf("}\n");
	}
}
