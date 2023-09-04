#include "main.h"

/**
 * _strlen- A function that calculates the length of a string
 *@s: Pointer to string
 *
 *Return: length of string
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 * argstostr - function that concatenates all the arguments of
 *your program.
 *@ac: Argument count
 *@av: Array containing string arguments
 *
 *Return: Pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, index = 0, len = ac;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		len += _strlen(av[i]);
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			s[index++] = av[i][j];
		}
		s[index++] = '\n';
	}
	s[index] = '\0';

	return (s);
}
