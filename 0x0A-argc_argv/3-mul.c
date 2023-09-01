#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 *@argc: Argument count.
 *@argv: Array of string arguments
 *
 *Return: 0 (Success)
 */

int main(int argc, char **argv)
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	mult = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", mult);

	return (0);
}
