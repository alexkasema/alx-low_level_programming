#include "main.h"

/**
 *wildcmp - A function that compares two strings and check if
 *the strings can be considered identical.
 *@s1: Pointer to first string
 *@s2: Pointer to second string
 *
 *Return: 1 if strings can be considered identical, otherwise (0)
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 == '\0')
	{
		if (*s2 == '*' && *(s2 + 1) == '\0')
			return (1);
	}

	if (*s2 == '\0')
	{
		if (*(s2 - 1) == '*')
			return (1);
	}

	if (*s2 == '*' && *s1 != '\0')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
