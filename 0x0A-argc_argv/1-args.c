#include <stdio.h>

/**
 * main -program that prints the number of arguments passed into it.
 *@argc: argument count
 *@argv: Array containing a string of arguments passed
 *
 *Return: 0 (Success)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
