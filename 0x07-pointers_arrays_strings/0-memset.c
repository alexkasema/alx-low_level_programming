#include "main.h"

/**
 *_memset - A function that fills memory with a constant byte.
 *@s: Pointer to the array string
 *@b: Character to be filled
 *@n: Number of bytes to be filled starting from 's'
 *
 *Return:Pointer to memory area of 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
