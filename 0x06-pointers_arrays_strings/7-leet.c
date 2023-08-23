#include "main.h"

/**
 *leet - A function that encodes a string into 1337 (leet).
 *@s:String to be converted
 *
 *Return: A pointer to the converted string.
 */

char *leet(char *s)
{
	int i, j;
	char l[] = "AaEeOoTtLl";
	char n[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
				s[i] = n[j];
		}
	}
	return (s);
}
