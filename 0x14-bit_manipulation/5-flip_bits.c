#include "main.h"

/**
 * flip_bits - A function that returns the number of bits you would need to
 *	flip to get from one number to another.
 * @n: Integer input
 * @m: Integer input
 *
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res)
	{
		count += (res & 1);
		res >>= 1;
	}

	return (count);
}
