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
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = tail = new;
		return (new);
	}
	else
	{
		new->prev = tail;
		tail->next = new;
		tail = new;
	}

	return (new);
}
