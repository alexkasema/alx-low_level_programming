#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
