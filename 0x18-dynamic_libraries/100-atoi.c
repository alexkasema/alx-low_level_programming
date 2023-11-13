#include "main.h"

/**
 *_atoi- A function that convert a string to an integer.
 *@s: String to convert to integer
 *Return: number(integer)
 */

int _atoi(char *s)
{
	int sign = 1;
	char index = 0;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			index = 1;
			num = num * 10 + *s - '0';
		}
		else if (index)
			break;
		s++;
	}

	if (sign < 0)
		num = (-num);

	return (num);
}
