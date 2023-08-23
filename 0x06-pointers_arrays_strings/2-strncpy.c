#include "main.h"

/**
 *_strncpy- A function that copies a string.
 *@dest: Where to copy string.
 *@src: String to be copied.
 *@n: Number of bytes to copy.
 *
 *Return: res = (dest)
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *res = dest, *original = src;
	int src_len = 0, i;

	while (*src)
	{
		src_len++;
		src++;
	}
	src_len++;

	if (n > src_len)
		n = src_len;

	src = original;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
		*dest = '\0';
	}


	return (res);
}
