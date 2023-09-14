#include "variadic_functions.h"

/**
 *sum_them_all-A function that returns the sum of all its parameters.
 *@n: The first parameter argument
 *
 *Return: Sum of arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	if (n == 0)
		return (0);

	va_list nums;
	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, unsigned int);

	va_end(nums);

	return (sum);
}
