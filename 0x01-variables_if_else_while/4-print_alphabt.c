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
		if (al != 'q' && al != 'e')
			putchar(al);
	}
	putchar('\n');

	return (0);
}
