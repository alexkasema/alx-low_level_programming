#include "main.h"

/**
 *factorial - A function that returns the factorial of a given number
 *@n: Input number to find factorial of.
 *
 *Return: Factorial value
 */

int factorial(int n)
{
	/*!n = n * !(n - 1)*/

	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
