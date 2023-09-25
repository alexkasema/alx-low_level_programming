#include "lists.h"

/**
 * free_listint_safe - A function that frees a listint_t list.
 * @h: Pointer to pointer of head
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i, j, num = 0;
	listint_t buffer[1024];
	listint_t *current = *h;

	while (current != NULL && num < 1024)
	{
		for (i = 0; i < num; i++)
		{
			if (current == buffer[i])
			{
				for (j = i; j < num; j++)
					buffer[j]->next = NULL;

				*h = NULL;
				return (num);
			}
		}

		buffer[num++] = current;
		current = current->next;
		free(buffer[num - 1]);
	}

	*h = NULL;

	return (num);
}
