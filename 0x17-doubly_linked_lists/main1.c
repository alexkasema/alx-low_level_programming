#include "lists.h"

/**
 * main - Find the largest palindrome made from the product of
 *	two 3-digit numbers.
 *
 * Return: (0)Success else 1
 *
 */

int main(void)
{
	int i, j, num = 0, largest = 0;

	for (i = 999; i >= 100; i--)
	{
		for (j = 999; j >= 100; j--)
		{
			num = i * j;
			if (is_palindrome(num))
			{
				if (num > largest)
					largest = num;
			}
		}
	}
	printf("%d\n", largest);

	return (0);
}

/**
 * is_palindrome - A function that reverses a number and checks its same
 * @num: Number to check
 * Return: 1 if same
 */

int is_palindrome(int num)
{
	int n = num, rev = 0;

	while (n)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}

	return (rev == num);
}
