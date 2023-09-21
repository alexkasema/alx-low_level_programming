#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: Pointer to pointer to head of list
 * @str: Input string
 *
 * Return: Pointer to newly created element(node)
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last_node;
	char *s;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	s = strdup(str);
	if (s == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = s;
	new->len = _strlen(s);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	last_node = *head;

	while (last_node != NULL)
		last_node = last_node->next;

	last_node = new;

	return (new);
}

/**
 * _strlen - A function that calculates the length of a string
 * @str: The string input
 * Return: length of string
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
