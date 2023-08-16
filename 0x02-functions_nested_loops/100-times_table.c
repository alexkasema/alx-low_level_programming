#include "main.h"

/**
 *print_times_table - entry point
 *@n: User Input
 *Return: 0
 */

void print_times_table(int n)
{
	int a, b, num;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				num = a * b;
				if (b == 0)
					_putchar(num + '0');
				else if (num < 10 && b != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(num + '0');
				}
				else if (num >= 10 && num < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((num / 10) + '0');
					_putchar((num % 10) + '0');
				} else if (num >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((num / 100) + '0');
					_putchar(((num / 10) % 10) + '0');
					_putchar((num % 10) + '0');

				}
			}
			_putchar('\n');
		}
	}
}
