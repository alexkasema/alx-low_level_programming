#include <stdio.h>

/**
 *main - A program that finds and prints the largest prime factor of a number
 *
 *Return: 0 (Success)
 */

int main(void)
{
	long int i, n1, n2;

	n1 = 612852475143;

	for (i = 1; i <= n1; i++)
	{
		if (n1 % i == 0)
		{
			if (n1 == i)
			{
				printf("%ld\n", i);
				break;
			}
			n2 = n1 / i;
			n1 = n2;
		}
	}
	return (0);
}
