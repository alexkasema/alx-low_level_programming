#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the minimum number of
 *coins to make change for an amount of money.
 *use an unlimited number of coins of values 25,10,5,2, and 1 cent
 *
 *@argc: Argument counter
 *@argv: Array cointing the string arguments
 *
 *Return: 0(Success) 1(Error)
 */

int main(int argc, char **argv)
{
	int money, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money <= 0)
	{
		printf("0\n");
		return (1);
	}

	while (money > 0)
	{
		if (money >= 25)
			money -= 25;

		else if (money >= 10)
			money -= 10;

		else if (money >= 5)
			money -= 5;

		else if (money >= 2)
			money -= 2;

		else if (money >= 1)
			money -= 1;

		cents++;
	}

	printf("%d\n", cents);
	return (0);
}
