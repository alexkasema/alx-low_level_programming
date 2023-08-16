#include "main.h"

/**
 *largest_number- print largest number out of 3
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
		largest = a;
	else if (b >= a && b >= c)
		largest = b;
	else if (c >= a && c >= b)
		largest = c;

	return (largest);
}
