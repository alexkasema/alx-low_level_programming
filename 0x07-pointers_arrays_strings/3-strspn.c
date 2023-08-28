#include "main.h"

/**
 *_strspn - A function that gets the length of a prefix substring.
 *@s: A pointer to the string to be scanned.
 *@accept: A pointer to string containing character to match.
 *
 *Return: count (number of char bytes found in initial segment)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			break;
	}

	return (count);
}
