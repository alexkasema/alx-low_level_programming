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
	int len = 0;
	int i, index = 0;
	int *_array;

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
		len++;

	_array = malloc(sizeof(*_array) * len);
	if (_array == NULL)
		return (NULL);

	for (i = min; i < len; i++)
		_array[index++] = i;

	return (_array);
}
