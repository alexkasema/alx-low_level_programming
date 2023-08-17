#include "main.h"

/**
 *print_triangle - A function that prints a triangle, followed by a new line.
 *@size: Input
 *
 *Return: Void
 */

void print_triangle(int size)
{
	int a, b, c;

	c = size - 1;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = 1; b <= size; b++)
			{
				if (b < c)
					_putchar(' ');
				else
					_putchar('#');
			}
			c--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
