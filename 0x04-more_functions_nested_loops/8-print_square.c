#include "main.h"

/**
 *print_square- A function that prints a square, followed by a new line
 *@size: Input
 *
 *Return: void
 */

void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
