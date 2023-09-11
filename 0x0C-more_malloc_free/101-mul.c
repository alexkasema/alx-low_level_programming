#include "main.h"

char *mul(char *, char *);
void exit_code(char *, int);
int _is_num(char *);
int _is_zero(char *);
int _strlen(char *);

/**
 * main - multiplies two numbers from program arguments
 *@ac: argument count.
 *@av: array holding the strings of arrguments passed.
 *
 *Return: 0 (Success)
 */

int main(int ac, char **av)
{
	char *num1, *num2, *res;

	num1 = av[1];
	num2 = av[2];

	if (ac != 3 || _is_num(num1) == -1 || _is_num(num2) == -1)
		exit_code("Error", 98);

	if (_is_zero(num1) == 0 || _is_zero(num2) == 0)
	{
		exit_code("0", 0);
		return (0);
	}

	res = mul(num1, num2);

	free(res);

	return (0);
}

/**
 * mul - Multiply two numbers which are input as program arguments
 *@num1: Input
 *@num2: Input
 *
 *Return: result of multiplication of num1 by num2
 */

char *mul(char *num1, char *num2)
{
	int i, j;
	int index, len1, len2;
	int holder, tmp;
	char *res;

	len1 = _strlen(num1);
	len2 = _strlen(num2);

	res = malloc(len1 + len2 + 1);
	if (res == NULL)
		exit_code("Error Allocating Memory", 99);

	for (i = len1 - 1; i >= 0; i--)
	{
		holder = 0;
		for (j = len2 - 1, index = i + len2; j >= 0; j--, index--)
		{
			tmp = (num1[i] - '0') * (num2[j] - '0') + (res[index] - '0' + holder);
			holder = tmp / 10;
			res[index] = tmp % 10 + '0';
		}
		res[index] += holder;
	}

	i = 0;

	while (res[i] == '0')
		i++;
	if (i > 0)
	{
		for (j = 0; j <= len1 + len2 - i; j++)
			res[j] = res[j + i];
	}

	return (res);

}

/**
 * exit_code - A function that prints the exit code.
 *@s: String to print
 *@code: exit code
 *
 *Return: void
 */

void exit_code(char *s, int code)
{
	int i;

	for (i = 0; s[i]; i++)
		putchar(s[i]);
	putchar('\n');

	if (code != 0)
		exit(code);
}

/**
 * _is_num- A function to check if input is number or not
 *@s: Input string to check
 *Return: 0 (If string is a number)
 */

int _is_num(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 48 || s[i] > 57)
			return (-1);
	}
	return (0);
}

/**
 * _is_zero - A function to check if Input is zero or not
 *@s: String input to check
 *
 *Return: 0 (if it is zero) 1 (if it is not)
 */

int _is_zero(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != '0')
			return (1);
	}
	return (0);
}

/**
 *_strlen - A function that calculates the length of a string
 *@s: String input
 *Return: length of string
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
