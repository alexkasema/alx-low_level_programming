#include "main.h"

/**
 * reverse_array- A function that reverses the content of an array of integers.
 *@a: Array int content.
 *@n: number of elements in array.
 *
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int holder;
	int i = 0;

	while (i < n--)
	{
		holder = a[i];
		a[i++] = a[n];
		a[n] = holder;
	}
}
