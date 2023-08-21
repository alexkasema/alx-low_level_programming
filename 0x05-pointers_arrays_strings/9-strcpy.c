#include "main.h"
#include <string.h>

/**
 *_strcpy - A function that copies the string from one pointer
 * to another
 *@dest: destination to copy to
 *@src: String to copy
 *Return: c (char)
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	char *c = dest;

	return (c);
}
