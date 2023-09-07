#include "main.h"

/**
 * _strlen - A function that calculates the length of a string
 *@s: Pointer to string
 *Return: length of string
 */

unsigned int _strlen(char *s)
{
	unsigned int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 * string_nconcat - A function that concatenates two strings.
 *@s1: Input string
 *@s2: Input string
 *@n: Number of bytes to concatenate to s1
 *
 *Return: Pointer to address of concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1 = 0, len2 = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	n = n > len2 ? len2 : n;

	s = malloc(sizeof(*s) * (len1 + n + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (i = 0; i < n; i++)
		s[len1 + i] = s2[i];

	s[len1 + n] = '\0';

	return (s);
}
