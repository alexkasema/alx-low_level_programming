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
	int i = 0, len1 = 0, len2 = 0;
	char *ns, *ss1, *ss2;

	ss1 = s1;
	ss2 = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		len1++;
		s1++;
	}
	s1 = ss1;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens++;
		s2++;
	}
	s2 = ss2;
	ns = malloc(sizeof(char) * (len1 + len2 + 1));
	ss1 = ns;
	if (ns == NULL)
		return (NULL);
	for (; i < (len1 + len2); i++)
	{
		if (i < len1)
		{
			ns[i] = *s1;
			s1++;
		}
		else
		{
			ns[i] = *s2;
			s2++;
		}
	}
	ns[i] = '\0';
	return (ss1);
}
