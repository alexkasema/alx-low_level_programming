#include <stdio.h>

/**
 *main - A program that print first 50 fibonacci nums starting with 1,2
 *
 *Return: 0 Success
 */
int main(void)
{
	int i, fib[50];

	fib[0] = 1;

	fib[1] = 2;

	printf("%d, %d, ", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];

		if (i == 49)
			printf("%d\n", fib[i]);
		else
			printf("%d, ", fib[i]);
	}

	return (0);
}
