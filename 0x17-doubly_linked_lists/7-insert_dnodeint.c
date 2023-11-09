#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a new node at a given position.
 * @h: Double pointer to the head of the list
 * @idx: position at which to add the node
 * @n: Integer value to add
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (i != idx - 1)
		return (NULL);

	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;
	current->next = new;
	new->next->prev = new;

	return (new);
}
