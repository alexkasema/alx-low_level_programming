#include "lists.h"

/**
 * insert_nodeint_at_index-function that inserts a new node at a given position
 * @head: Pointer to pointer of head
 * @idx: Index of where to insert the node
 * @n: Interger input
 * Return: Pointer to new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;

	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
