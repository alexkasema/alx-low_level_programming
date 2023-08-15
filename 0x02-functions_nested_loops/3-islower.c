#include "main.h"

/**
 *_islower - A function that checks for lowercase characters
 *@c: the required input
 *Return: 1 (lowercase) 0 (Uppercase)
 */
int _islower(int c)
{
	if (islower(c) != 0)
		return (1);
	else
		return (0);
}
