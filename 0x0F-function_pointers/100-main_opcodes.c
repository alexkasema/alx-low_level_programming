#include <stdio.h>
#include <stdlib.h>

/**
 *opcodes - A Function that prints opcodes of this program
 *@s: address of main function
 *@n: number of bytes to be printed
 *Return: void
 */

void opcodes(char *s, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 *main - Entry point
 *@ac: Argument count
 *@av: Array that holds string of arguments passed
 *Return: 0 (success)
 */

int main(int ac, char **av)
{
	int n;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(av[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes((char *)&main, n);

	return (0);
}
