#include "main.h"

/**
 *_isalpha - A function that checkes for alphabetic characters
 *@c: int type user input
 *
 *Return: 1 (alphabet) 0 (other)
 */
int _isalpha(int c)
{
	char i, j;
	int is_letter = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (j = 'A'; j <= 'Z'; j++)
		{
			if (c == i || c == j)
				is_letter = 1;
		}
	}
	return (is_letter);
}
