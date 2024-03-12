#include "search_algos.h"

/**
 * binary_search - A function that searches for a value in a sorted array of
 *	integers using the Binary search algorithm.
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in array.
 * @value: The value to search for.
 * Return: The index where value is located, else (-1).
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, l = 0, m = 0, h = size - 1;

	if (!array || size <= 0)
		return (-1);

	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i <= h; i++)
		{
			if (i < h)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		m = (l + h) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}

	return (-1);
}
