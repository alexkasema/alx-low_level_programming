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
	int digit, absolute, answer;

	absolute = abs(n);

	digit = absolute % 10;

	answer = digit % 10;

	_putchar(answer + '0');

	return (answer);
}
