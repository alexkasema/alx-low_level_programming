#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer that foints to first element
 * @str: Input string
 *
 * Return: Pointer newly created element(node)
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *string;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = string;
	new->len = _strlen(string);

	new->next = *head;
	*head = new;

	return (new);
}

/**
 * _strlen - A function that calculates the length of a string.
 * @str: The string input
 * Return: Length of the string
 */

int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	return (len);
}
