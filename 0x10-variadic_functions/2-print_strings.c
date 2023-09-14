#include "variadic_functions.h"

/**
 *print_strings-A function that prints strings,followed by a new line
 *@separator: A string to separate the argument strings
 *@n: Number of strings to input
 *
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		printf("%s", s == NULL ? "(nil)" : s);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
