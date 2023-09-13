#include "function_pointers"

/**
 *array_iterator - function that executes a function given as a
 *	parameter on each element of an array.
 *@array: Pointer to array to iterate
 *@size: Size of array
 *@action: Function to execute on each iteration
 *Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
