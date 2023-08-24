#include "main.h"

/**
 *rot13 - A function that encodes a string using rot13.
 *@s: Input string to encode.
 *
 *Return: A pointer to the encoded string.
 */

char *rot13(char *s)
{
	int i, j;
	/*var e = encryption*/
	char l[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char e[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = o; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{
			if (s[i] == l[j])
			{
				s[i] = e[j];

				break;
			}
		}
	}

	return (s);
}
