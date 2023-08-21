#include "main.h"

/**
 *rev_string - A function that reverses a string.
 *@s: String input.
 *
 *Return: void
 */

void rev_string(char *s)
{
	/*l = lenght of string*/
	int l = 0, i = 0;
	char holder;

	while (s[l] != '\0')
		l++;

	while (i < l--)
	{
		holder = s[i];

		s[i] = s[l];
		i++;
		s[l] = holder;
	}
}
