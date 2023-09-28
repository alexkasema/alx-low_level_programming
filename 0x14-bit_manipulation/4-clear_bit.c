#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index.
 * @n: A pointer to integer
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	max = ~(max << index);

	*n &= max;

	return (1);
}
