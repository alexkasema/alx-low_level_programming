#include "lists.h"

/*How to use a constructor in C*/
void before_main(void) __attribute__((constructor));

/**
 * before_main - A function that executes code before the main function call
 * Return: void
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
