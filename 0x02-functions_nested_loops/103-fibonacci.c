#include <stdio.h>

/**
 *main - sum of fibonacci nums divisible by 2
 *
 *Return: 0 Success
 */
int main(void)
{
	int i;
	int sum = 2;
	long int fib[50];

	fib[0] = 1;

	fib[1] = 2;

	printf("%ld, %ld, ", fib[0], fib[1]);

	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		if ((fib[i] % 2) == 0 && fib[i] < 4000000)
			sum += fib[i];
	}
	printf("%ld\n", sum);

	return (0);
}
