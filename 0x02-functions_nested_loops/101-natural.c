#include <stdio.h>

/**
 *main - Adds the sum of the multiples of 3 or 5 in given range
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);

	return (0);
}
