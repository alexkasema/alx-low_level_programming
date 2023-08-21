#include "main.h"

/**
 *_strcpy - A function that copies the string from one pointer
 * to another
 *@dest: destination to copy to
 *@src: String to copy
 *Return: c (char)
 */

char *_strcpy(char *dest, char *src)
{
	/* l = length of string*/
	int i, l = 0;

	while (*(src + l) != '\0')
		l++;

	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[l] = '\0';

	return (dest);
}
