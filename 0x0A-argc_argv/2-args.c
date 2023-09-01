#include <stdio.h>

/**
 * main - A program that prints all arguments it receives.
 *@argc: Argument count.
 *@argv: Array of string arguments
 *
 *Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}

	return (0);
}
