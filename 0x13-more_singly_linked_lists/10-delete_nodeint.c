#include "lists.h"

/**
 * delete_nodeint_at_index - A function that deletes the node at
 *	index index of a listint_t linked list.
 * @head: Pointer to pointer of head
 * @index: index where to delete the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *tmp;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (i != index - 1)
		return (-1);

	tmp = current->next;
	current->next = current->next->next;
	free(tmp);

	return (1);
}
