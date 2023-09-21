#include "lists.h"

/**
 * list_len - A unction that returns the number of elements in
 * a linked list_t list.
 *
 * @h: Pointer to head of the list
 * Return: Number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}
