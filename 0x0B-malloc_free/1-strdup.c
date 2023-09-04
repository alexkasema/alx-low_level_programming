#include "main.h"

/**
 *_strdup - A function that returns a pointer to a newly allocated
 *space in memory, which contains a copy of the string given as a
 *parameter.
 *@str: Pointer to string to be copied
 *
 *Return: Pointer to copied string
 */

char *_strdup(char *str)
{
	unsigned int i, j, len = 0;

	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	s = malloc(sizeof(char) * len + 1);

	if (s == NULL)
		return (NULL);

	for (j = 0; j < len; j++)
		s[j] = str[j];
	s[j] = '\0';

	return (s);
}
