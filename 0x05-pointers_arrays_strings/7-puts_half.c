#include "main.h"

/**
 *puts_half - function that prints half of a string,
 *followed by a new line.
 *@str: String Input
 *Return: Void
 */

void puts_half(char *str)
{
	int j, k, l = 0;

	while (str[l] != '\0')
		l++;

	if (l % 2 == 0)
		j = l / 2;
	else
		j = (l - 1) / 2;

	for (k = j; k < l; k++)
		_putchar(str[k]);
	_putchar('\n');
}
