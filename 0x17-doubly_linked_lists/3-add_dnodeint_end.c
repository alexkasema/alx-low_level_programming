#include "lists.h"

/**
 * add_dnodeint_end - Add new node at the end of the list
 * @head: Double pointer to the head of the list
 * @n: Integer
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next)
	{
		current = current->next;
	}

	new->prev = current;
	current->next = new;

	return (new);
	
}
