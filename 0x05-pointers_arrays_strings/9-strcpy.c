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
	/* Holder = store the content copied so as to return */
	char *holder = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	return (holder);
}
