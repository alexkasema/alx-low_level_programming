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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* Struct dog*/

