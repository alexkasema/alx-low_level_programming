#include "main.h"
#include <ctype.h>

/**
 *_isupper - A function that checks for uppercase characters
 *@c: Input type
 *
 *Return: 1 (Uppercase) 0(Not)
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
		return (1);
	else
		return (0);
}
