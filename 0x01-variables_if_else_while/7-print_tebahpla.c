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

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);
	putchar('\n');

	return (0);
}
