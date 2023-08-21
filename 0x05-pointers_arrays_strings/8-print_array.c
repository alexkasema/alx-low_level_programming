#include "main.h"
#include <stdio.h>

/**
 *print_array - A function that prints n elements of an array of integers,
 *followed by a new line.
 *@a: array
 *@n: Number of elements
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);

		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
