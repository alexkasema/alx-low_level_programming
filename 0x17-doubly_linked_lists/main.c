#include "lists.h"

int main(void)
{
	dlistint_t *head;
	dlistint_t *node;
	int sum;
	head = NULL;

	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	print_dlistint(head);

	node = get_dnodeint_at_index(head, 3);
	printf("%d\n", node->n);

	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);

	free_dlistint(head);

	head = NULL;
	return (EXIT_SUCCESS);
}
