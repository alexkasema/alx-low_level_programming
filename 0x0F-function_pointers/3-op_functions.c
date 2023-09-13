#include "3-calc.h"

/**
 *op_add- A function that adds two numbers
 *@a: Num1
 *@b: Num2
 *Return: sum of a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that subtracts 2 numbers
 *@a: Num1
 *@b: Num2
 *
 *Return: value of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that multiplies two numbers
 *@a: Num1
 *@b: Num2
 *Return: product of a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that divides two numbers
 *@a:Num1
 *@b:Num2
 *Return: Value of a / b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - A function that calculates the module of two numbers
 *@a: Num1
 *@b: Num2
 *Return: The module of a a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
