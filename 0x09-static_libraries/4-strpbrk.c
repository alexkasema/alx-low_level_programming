#include "main.h"
#include <stdio.h>

/**
 *_strpbrk-function that searches a string for any of a set of bytes
 *@s: A pointer to the string to be scanned.
 *@accept: A pointer to string containing characters to match.
 *
 *Return: Pointer to  string of matching characters.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
