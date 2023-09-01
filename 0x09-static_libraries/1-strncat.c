#include "main.h"

/**
 *_strncat - A function that concatenates two strings.
 *@dest: destination to append string.
 *@src: string to append to dest.
 *@n: number of bytes to append to dest from src.
 *Return: res(Holds value of dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	char *res = dest, *original = src;
	int src_len = 0;
	int i = 0;

	while (*src)
	{
		src_len++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > src_len)
		n = src_len;

	src = original;

	for (i = 0; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (res);
}
