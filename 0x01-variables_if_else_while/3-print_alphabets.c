#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	char al;
	char AL;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);
	for (AL = 'A'; AL <= 'Z'; AL++)
		putchar(AL);
	putchar('\n');

	return (0);
}
