#include "lists.h"

/**
 * find_listint_loop - A function that finds the loop in a linked list.
 * @head: pointer to head
 *
 * Return: Pointer to where the loop starts or NULL if there is no loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *small, *big;

	small = big = head;

	while (small && big && big->next)
	{
		small = small->next;
		big = big->next->next;
		if (small == big)
		{
			small = head;
			break;
		}
	}

	if (!small || !big || !big->next)
		return (NULL);

	while (small != big)
	{
		small = small->next;
		big = big->next;
	}

	return (big);
}
