#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 *main- Print out a string followed by a new line to the stder
 *
 *Return: 1 (success)
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, s, strlen(s));
	return (1);
}
