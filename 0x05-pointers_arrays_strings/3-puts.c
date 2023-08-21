#include <string.h>
#include "main.h"

/**
 *_puts - A function that prints a string, followed by a new line, to stdout.
 *@str: String from address memory
 *
 *Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
