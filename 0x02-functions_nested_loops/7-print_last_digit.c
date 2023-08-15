#include "main.h"
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

/**
 *print_last_digit - A function that prints the last digit of a number.
 *@n:User Input type
 *
 *Return: digit
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = -1 * (n % 10);
	else
		digit = n % 10;

	_putchar((digit % 10) + '0');

	return (digit % 10);
}
