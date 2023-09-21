#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: Pointer to head of list.
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
