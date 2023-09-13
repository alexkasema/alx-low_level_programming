#include "3-calc.h"

/**
 * main - A function that performs simple operations btwn 2 numbers
 *@ac: Argument count
 *@av: Array containing the string arguments passed
 *
 *Return: 0 (success)
 */

int main(int ac, char **av)
{
	int (*sign)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	sign = get_op_func(av[2]);

	if (sign == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", sign(atoi(av[1]), atoi(av[3])));

	return (0);
}
