#include "main.h"

/**
 * _realloc - function that reallocates a
 *	memory block using malloc and free.
 *@ptr: Pointer to memory created by malloc.
 *@old_size: size of old memory.
 *@new_size: Size of new memory.
 *
 *Return: Pointer to new memory address
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *_newptr;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	_newptr = malloc(new_size);
	if (_newptr == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
		_newptr[i] = *((char *)(ptr) + i);

	free(ptr);

	return (_newptr);
}
