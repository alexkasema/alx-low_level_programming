#include "lists.h"

/**
 * listint_len - A function that returns the number of elements in a linked
 *	listint_t list.
 * @h: Pointer to head of the list
 * Return: Number of elements(nodes) in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);

}
