#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 *@array: Pointer to array containing the integers
 *@size: Size of the array
 *@cmp: Pointer to function that does the comparison
 *
 *Return: Index of the first element for which the cmp function
 *	does not return 0.
 *	If no elements match return -1
 *	If  size <=0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
