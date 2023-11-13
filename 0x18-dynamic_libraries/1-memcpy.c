#include "main.h"

/**
 *_memcpy - A function that copies memory area.
 *@dest: Pointer to memory location where copied data will be stored
 *@src:Pointer to location from where data is to be copied
 *@n: Number of bytes to be copied
 *
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
