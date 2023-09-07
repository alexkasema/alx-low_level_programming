#include "main.h"

/**
 *_calloc - function that allocates memory for an array,using malloc.
 *@nmemb: Number of elements in the array.
 *@size: Size of each element
 *
 *Return: pointer to created array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	unsigned int len = nmemb * size;

	s = malloc(len);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		s[i] = 0;

	return (s);

}
