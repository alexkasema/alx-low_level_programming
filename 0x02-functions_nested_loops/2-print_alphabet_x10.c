#include "main.h"

/**
 *print_alphabet_x10 - A function that prints alphabet 10 times
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	char al;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
			_putchar(al);
		_putchar('\n');
	}
}
