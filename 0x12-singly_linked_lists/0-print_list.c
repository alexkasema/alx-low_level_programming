#include "lists.h"

/**
 * print_list - A function that prints all elements of a list_s list
 * @h: Pointer to head of the list.
 *
 * Return: Number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", current->len, current->str);

		count++;
		current = current->next;
	}

	return (count);
}
