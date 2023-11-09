#include "lists.h"

int main(void)
{
	dlistint_t *head;
	dlistint_t *node;
	head = NULL;

	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	print_dlistint(head);

	node = get_dnodeint_at_index(head, 3);
	printf("%d\n", node->n);

	free_dlistint(head);

	head = NULL;
	return (EXIT_SUCCESS);
}
