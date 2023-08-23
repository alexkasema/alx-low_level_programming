#include "main.h"

int separators(char c);
/**
 *cap_string - A function that capitalizes all words of a string.
 *@s: string input
 *Return: The pointer to converted string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (i == 0 && (s[i] >= 'a' && s[i] <= 'z'))
			s[i] -= 32;

		if (separators(s[i]) && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			s[i + 1] -= 32;

		i++
	}

	return (s);
}

/**
 *separators - check if they are separators.
 *@c: charracter to check
 *Return: 1(True) 0(False)
 */

int separators(char c)
{
	int i;
	char separator[] = {' ', ',', '.', ';', '\n', '\t', '!', '?',
		'"', '{', '}', '(', ')'};

	for (i = 0; i < 13; i++)
	{
		if (c == separator[i])
			return (1);
	}

	return (0);
}
