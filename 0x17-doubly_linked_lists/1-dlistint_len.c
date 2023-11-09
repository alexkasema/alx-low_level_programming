#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 *	dlistint_t list.
 *
 * @h: Pointer to head of list
 *
 * Return: Number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current)
	{
		count++;
		current = current->next;
	}

	return (count);
}
