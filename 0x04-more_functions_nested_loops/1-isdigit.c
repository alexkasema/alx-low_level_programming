#include "main.h"
#include <ctype.h>

/**
 *_isdigit- A function that checks for a digit (0 through 9).
 *@c: Input type
 *
 *Return: 1 (is digit) 0 (Not)
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
		return (1);
	else
		return (0);
}
