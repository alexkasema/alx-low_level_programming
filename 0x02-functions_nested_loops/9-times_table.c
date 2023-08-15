#include "main.h"

/**
 *times_table- A function that prints the 9 times table, starting with 0.
 *
 *Return: void
 */
void times_table(void)
{
	int a, b, num;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			num = a * b;

			if ((num / 10) == 0)
			{
				if (b != 0)
					_putchar(' ');
				_putchar(num + '0');

				if (b == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (b == 9)
					continue;

				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
