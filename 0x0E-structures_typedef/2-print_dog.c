#include "dog.h"

/**
 * print_dog - A function that prints a struct dog.
 *@d: Pointer to struct to print
 *
 *Return: Void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name == NULL ? "(nil)" : d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)" : d->owner);
	}
}
