#include "variadic_functions.h"

/**
 *print_numbers-function that prints numbers, followed by a new line.
 *@separator: A string that separates the numbers
 *@n: Number of arguments additinal arguments the function will have
 *
 *Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
