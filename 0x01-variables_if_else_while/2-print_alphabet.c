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

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');

	return (0);
}
