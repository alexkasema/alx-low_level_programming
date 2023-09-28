#include "main.h"

/**
 * print_binary - A function that prints the binary representation of a number.
 * @n: Integer input
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, max = 1;
	int flag = 0;

	max <<= (sizeof(unsigned long int) * 8 - 1);

	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if (max & n)
		{
			_putchar('1');
			flag = 1;
		}
		else
		{
			if (flag || i == sizeof(unsigned long int) * 8 - 1)
				_putchar('0');
		}

		max >>= 1;
	}
}
