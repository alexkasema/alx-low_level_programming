#include "main.h"

/**
 *_strchr - A function that locates a character in a string.
 *@s: Pointer to memory address of string.
 *@c: Character to look for.
 *
 *Return: Pointer to first instance of character found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
