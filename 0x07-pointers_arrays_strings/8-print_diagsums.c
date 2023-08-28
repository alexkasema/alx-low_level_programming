#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - A function that prints the sum of
 *the two diagonals of a square matrix of integers.
 *@a:pointer to the first address of square
 *@size: Length of square (columns)
 *
 *Return: Void
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	size_t sum1, sum2;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += *(a + i * size + j);
			}
			if (i + j == size - 1)
			{
				sum2 += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
