#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

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
void free_dog(dog_t *d);


int _strlen(char *s);
void _strcpy(char *dest, char *src);

#endif /* Struct dog*/

