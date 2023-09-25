#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the nth node of a
 *	listint_t linked list.
 * @head: Pointer to head of list
 * @index: Index of the desired node
 *
 * Return: Pointer to the node at the given index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (NULL);

	return (current);
}
