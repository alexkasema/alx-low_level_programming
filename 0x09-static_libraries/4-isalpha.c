#include <ctype.h>
#include "main.h"

/**
 *_isalpha - A function that checkes for alphabetic characters
 *@c: int type user input
 *
 *Return: 1 (alphabet) 0 (other)
 */
int _isalpha(int c)
{
	if (isalpha(c) != 0)
		return (1);
	else
		return (0);
}
