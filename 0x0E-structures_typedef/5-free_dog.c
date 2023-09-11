#include "dog.h"

/**
 * free_dog - A function that frees dogs.
 *@d: Pointer to type struct of dog
 *Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
