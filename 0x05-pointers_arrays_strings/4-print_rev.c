#include <string.h>
#include "main.h"

/**
 *print_rev - A function that prints a string, in reverse,
 *followed by a new line.
 *@s: String Input
 *
 *Return: Void
 */

void print_rev(char *s)
{
	int i, len = strlen(s);

	for (i = len; i > -1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
