#include "main.h"

/**
 *_strcat - A function that concatenates two strings.
 *@dest: Destination string.
 *@src: String to be appended to dest.
 *
 *Return: res(Result of dest) string
 */

char *_strcat(char *dest, char *src)
{

	char *res = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (res);
}
