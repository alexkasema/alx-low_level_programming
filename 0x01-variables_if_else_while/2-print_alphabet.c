#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	char al = 'a';

	for (al; al <= 'z'; al++)
		putchar(al);
		putchar('\n');

	return (0);
}
