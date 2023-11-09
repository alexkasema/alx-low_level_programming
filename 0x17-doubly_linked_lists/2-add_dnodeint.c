#include "lists.h"

/**
 * add_dnodeint - Add a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to head of list
 * @n: Integer
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head)
	{
		new->next = *head;
		(*head)->prev = new;
	}
	else
		new->next = NULL;

	*head = new;

	return (new);
}
