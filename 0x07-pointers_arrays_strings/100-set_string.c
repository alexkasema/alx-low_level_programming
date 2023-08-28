#include "main.h"

/**
 * set_string - A function that sets the value of a pointer to a char
 *@s: Pointer to the address of string to change
 *@to: Pointer that contains string to change.
 *
 *Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}
