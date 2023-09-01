#include "main.h"

/**
 *_islower - A function that checks for lowercase characters
 *@c: the required input
 *Return: 1 (lowercase) 0 (Uppercase)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
