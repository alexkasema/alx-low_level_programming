#include "main.h"

/**
 * is_divisible - A function that checks if a number is divisible.
 *@n: Number to check
 *@i: is divisible by
 *
 *Return: 1 if is only divisible by 1
 */

int is_divisible(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_divisible(n, i - 1));
}

/**
 * is_prime_number - A function that returns 1 if the input integer
 *is a prime number, otherwise return 0.
 *@n: Input integer
 *
 *Return: 1 if input is prime, 0 if it's not.
 */

int is_prime_number(int n)
{
	if (n < 0 || ((n % 2 == 0) && (n != 2)))
		return (0);
	if (n == 2)
		return (1);

	return (is_divisible(n, n - 2));
}
