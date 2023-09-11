#include "dog.h"

/**
 *init_dog - A function that initialize a variable of type struct dog
 *@d: Pointer to address of the dog struct
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Owner of dog
 *
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
