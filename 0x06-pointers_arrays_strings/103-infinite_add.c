#include "main.h"

/**
 *_strlen - A function that gets the length of a string.
 *@s: string input
 *
 *Return: len (length of string)
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 *infinite_add - A function that adds two numbers.
 *@n1: num 1
 *@n2: num 2
 *@r: where the result will be stored
 *@size_r: the size of the buffer
 *
 *Return: The pointer to buffer r or (0) if result cant fit in buffer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int largest, len1, len2, sum;
	int index = 0;
	int holder = 0;
	char tmp;

	len1 = _strlen(n1);
	len2 = _strlen(n2);

	if (len1 > len2)
		largets = len1;
	else
		largest = len2;

	if (largest + 1 >= size_r)
		return (0);

	len1--;
	len2--;

	while (len1 >= 0 || len2 >= 0 || holder != 0)
	{
		sum = holder;
		if (len1 >= 0)
			sum += n1[len1--] - '0';
		if (len2 >= 0)
			sum += n2[len2--] - '0';
		holder = sum / 10;

		r[index++] = sum % 10 + '0';
	}
	r[index] = '\0';
	for (i = 0; i <= (index - 1) / 2; i++)
	{
		tmp = r[i];
		r[i] = r[index - 1 - i];
		r[index - 1 - i] = tmp;
	}
	return (r);

}
