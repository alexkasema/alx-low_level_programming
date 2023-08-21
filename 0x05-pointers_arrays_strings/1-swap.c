#include "main.h"

/**
 *swap_int - A function that swaps the values of two intergers.
 *@a: Input 1
 *@b: Input 2
 *
 *Return: void
 */

void swap_int(int *a, int *b)
{
	int holder;

	holder = *a;

	*a = *b;

	*b = holder;
}
