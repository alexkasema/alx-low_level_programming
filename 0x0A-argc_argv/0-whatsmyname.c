#include <stdio.h>

/**
 * main - A program that prints its name, followed by a new line.
 *@argc: Number of arguments
 *@argv: Array cointaining string of arguments passed.
 *
 *Return: 0 (Success)
 */

int main(int argc __attribute__((unused)), char **argv)
{

	printf("%s\n", argv[0]);

	return (0);
}
