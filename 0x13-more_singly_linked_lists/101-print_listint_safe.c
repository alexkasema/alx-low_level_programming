#include "lists.h"

/**
 * print_listint_safe - A function that prints a listint_t linked list.
 * @head: pointer to head of list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	unsigned int i, num = 0;
	const listint_t *array[1024];

	while (head != NULL num < 1024)
	{
		for (i = 0; i < num; i++)
		{
			if (head == array[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (num);
			}
		}

		array[num++] = head;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (num);
}
