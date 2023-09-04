#include "main.h"

/**
 *str_concat - A function that concatenates two strings.
 *@s1: Pointer to string 1
 *@s2: Pointer to string 2
 *
 *Return: Pointer to newly allocated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1 = 0, len2 = 0;

	char *ns;

	if (s1 == NULL)
		s1 == "";

	if (s2 == NULL)
		s2 == "";

	for (i = 0; s1[i]; i++)
		len1++;

	for (i = 0; s2[i]; i++)
		len2++;

	ns = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ns == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		ns[i] = s1[i];

	for (i = 1; s2[i]; i++)
		ns[len1 + i] = s2[i];

	ns[len1 + len2] = '\0';

	return (ns);

}

