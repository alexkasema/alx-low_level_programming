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

	for (i = len; i <= len; i--)
	{
		if (i >= 0)
		{
			_putchar(s[i]);
		}
	}
	_putchar('\n');
}
