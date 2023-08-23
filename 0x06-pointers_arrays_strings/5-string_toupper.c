#include "main.h"

/**
 *string_toupper - A function that changes all lowercase
 *letters of a string to uppercase.
 *@a: string input
 *
 *Return: res (result of converted string)
 */

char *string_toupper(char *a)
{
	char *res = a;

	while (*a)
	{
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;

		a++;
	}

	return (res);
}
