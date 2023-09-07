#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 *@b: size of memory to allocate
 *
 *Return: pointer to allocated memory address
 */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
