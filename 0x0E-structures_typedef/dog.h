#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - New type dog
 *@name: The name of the dog
 *@age: Age of the dog
 *@owner: Owner of the dog
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* Struct dog*/

