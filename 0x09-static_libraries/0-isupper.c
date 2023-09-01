#include "main.h"

/**
 *_isupper - A function that checks for uppercase characters
 *@c: Input type
 *
 *Return: 1 (Uppercase) 0(Not)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
