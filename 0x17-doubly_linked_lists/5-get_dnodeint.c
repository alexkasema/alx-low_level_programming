#include "lists.h"

/**
 * get_dnodeint_at_index - Get the node at a given index
 * @head: Pointer to head of list
 * @index: Index value
 *
 * Return: Address of node at a given index
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
	{
		return (NULL);
	}

	return(current);
}
