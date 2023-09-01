#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers.
 *@argc: Argument count
 *@argv: Array containing string arguments passed
 *
 *Return: 0(success) 1(Error)
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");

	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}

