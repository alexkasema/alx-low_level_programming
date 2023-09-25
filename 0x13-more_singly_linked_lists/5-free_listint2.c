#include "lists.h"

/**
 * free_listint2 -A function that frees a listint_t list and sets head to null.
 * @head: Pointer to pointer of head
 *
 * Return: void
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
