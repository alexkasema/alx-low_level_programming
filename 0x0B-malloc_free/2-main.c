#include "main.h"

/**
 *main - Entry point
 *
 *Return: 0 (success)
 */

int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	printf("%s\n", s);
	free(s);

	return (0);
}
