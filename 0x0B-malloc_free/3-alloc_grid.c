#include "main.h"

/**
 *alloc_grid - A function that returns a pointer to a
 *2 dimensional array of integers.
 *@width: columns of 2d array
 *@height: rows of 2d array(begining of pointer)
 *
 *Return: Pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **_array, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	_array = malloc(sizeof(int *) * height);

	if (_array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		_array[i] = malloc(sizeof(int) * width);
		if (_array[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(_array[j]);
			free(_array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			_array[i][j] = 0;
	}

	return (_array);

}
