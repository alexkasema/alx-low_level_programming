#include "main.h"

/**
 *print_line - A function that draws a straight line in the terminal.
 *@n: Input
 *
 *Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
			_putchar('_');
	}
	_putchar('\n');
}
