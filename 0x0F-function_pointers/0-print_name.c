#include "function_pointers.h"

/**
 * print_name - A function that prints a name.
 *@name: Pointer to string to be printed
 *@f: Pointer to function to print the name
 *
 *Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
