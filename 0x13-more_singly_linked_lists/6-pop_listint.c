#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a listint_t
 *	linked list, and returns the head node’s data (n).
 * @head: pointer to pointer of head
 *
 * Return: Head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *current;
	int _data;

	if (*head == NULL)
		return (0);

	current = *head;

	_data = *head->n;

	*head = (*head)->next;

	free(current);

	return (_data);

}
