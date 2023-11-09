#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at a given index
 * @head: Double pointer to head of list
 * @index: Position at which to delete the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	current = *head;
	while (current && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index)
		return (-1);

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	if (current == *head)
		*head = current->next;

	free(current);

	return (1);
}
