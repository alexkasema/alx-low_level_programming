#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 * @b: Pointer to binary strings to convert
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, len = 0, base = 1;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	while (len)
	{
		if (b[len - 1] != '0' && b[len - 1] != '1')
			return (0);

		if (b[len - 1] == '1')
			res += base;

		base *= 2;
		len--;
	}

	return (res)
}
