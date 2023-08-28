#include "stdio.h"
#include <stdio.h>

/**
 * _strstr - A function that locates a substring
 *@haystack: A pointer to string to be scanned
 *@needle: A pointer to string to be found
 *
 *Return: A pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*haystack == '\0' && *needle == '\0')
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}

	return (NULL);
}
