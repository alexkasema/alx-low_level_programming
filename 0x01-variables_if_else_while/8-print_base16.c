#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry Point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int num;
	char al;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (al = 'a'; al <= 'f'; al++)
		putchar(al);
	putchar('\n');

	return (0);
}
