#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index.
 * @n: Integer input
 * @index: index of the bit you want
 *
 * Return:  value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	max <<= index;

	if (max & n)
		return (1);
	else
		return (0);
}
