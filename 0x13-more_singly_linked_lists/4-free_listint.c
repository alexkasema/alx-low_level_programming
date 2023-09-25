#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to head of list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
