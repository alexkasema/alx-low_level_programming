#include "main.h"

/**
 *main - Entry point
 *
 *Return: 0 Always (Success)
 */
int main(void)
{
	char w[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(w[i]);
	_putchar('\n');

	return (0);
}
