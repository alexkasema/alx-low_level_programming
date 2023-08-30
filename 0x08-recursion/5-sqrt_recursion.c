#include "main.h"

/**
 * _sqrt - Check if i is natural sqrt of n
 *@i: sqrt
 *@n: Input to find sqrt of.
 *
 *Return: i if its the natural sqrt, -1 if its not natural sqrt
 */

int _sqrt(int n, int i)
{
	if (i < 0 || i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 *_sqrt_recursion - A function that returns
 *the natural square root of a number.
 *@n: Input to find sqrt of
 *
 *Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
