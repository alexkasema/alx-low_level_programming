#include "main.h"

/**
 *word_count-A function that counts the words in a string
 *@s: Pointer to string
 *Return: number of words
 */

int word_count(char *s)
{
	int i, count = 0;

	for (i = 0; s[i]; i++)
	{
		if ((s[i] != ' ' || s[i] != '\t') && (s[i + 1] == ' ' ||
					s[i + 1] == '\t' || s[i + i] == '\n'))
			count++;
	}
	return (count);
}

/**
 *free_array - A function that frees the memory of 2D array
 *@s: Pointer to array
 *@height: height of array (rows)
 *Return: void
 */

void free_array(char **s, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(s[i]);
	free(s);
}

/**
 *strtow - A function that splits a string into words.
 *@str: Pointer to string to split
 *
 *Return: Pointer to 2D array of strings
 */

char **strtow(char *str)
{
	int i, j, index = 0, wc, len, start;
	char **s;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	s = malloc(sizeof(char *) * (wc + 1));
	if (s == NULL)
		return (NULL);
	s[wc] = NULL;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i - 1] == ' ' || i == 0))
		{
			start = i;
			len = 0;
			while (str[i] != ' ' && str[i])
			{
				len++;
				i++;
			}
			s[index] = malloc(sizeof(char) * (len + 1));
			if (s[index] == NULL)
			{
				free_array(s, index);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				s[index][j] = str[start + j];
			s[index][j] = '\0';
			index++;
		}
	}
	return (s);
}
