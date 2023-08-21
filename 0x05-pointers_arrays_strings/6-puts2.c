#include "main.h"

/**
 *puts2 - A function that prints every other character of a string,
 *starting with the first character, followed by a new line.
 *@str:String Input
 *
 *Return: Void
 */

void puts2(char *str)
{
	/*l = length of string*/
	int i, l = 0;

	while (str[l] != '\0')
		l++;



	for (i = 0; i <= l; i++)
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
}
