#include "main.h"

/**
 *create_array-A function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: input size of array
 *@c: character to initialize array with
 *
 *Return: Pointer to array created
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
