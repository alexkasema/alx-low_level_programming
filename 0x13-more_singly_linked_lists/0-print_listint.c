#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list
 *
 * Return: Number of elemtnts(nodes) in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}

	return (count);
}
