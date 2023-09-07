#include "main.h"

/**
 *array_range- A function that creates an array of integers.
 *@min: Smallest value
 *@max: largest value
 *
 *Return: pointer to created array
 */

int *array_range(int min, int max)
{
	int i;
	int *_array;

	if (min > max)
		return (NULL);

	_array = malloc(sizeof(*_array) * (max - min + 1));
	if (_array == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
		_array[i] = min + i;

	return (_array);
}
