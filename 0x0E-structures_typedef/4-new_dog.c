#include "dog.h"

int _strlen(char *);
void _strcpy(char *, char *);
/**
 *new_dog - A function that creates a new dog
 *@name: Name of Dog
 *@age: Age of Dog
 *@owner: Owner of Dog
 *Return: Pointer to memory address of created dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd;
	char *nd_name, *nd_owner;

	nd = malloc(sizeof(dog_t));
	if (nd == NULL)
		return (NULL);

	nd_name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (nd_name == NULL)
	{
		free(nd);
		return (NULL);
	}

	nd_owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (nd_owner == NULL)
	{
		free(nd_name);
		free(nd);
		return (NULL);
	}

	_strcpy(nd_name, name);
	_strcpy(nd_owner, owner);

	nd->name = nd_name;
	nd->owner = nd_owner;
	nd->age = age;

	return (nd);
}

/**
 * _strlen - A function that calculates the length of a string.
 *@s: Pointer to string.
 *Return: Length of string.
 */

int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}

/**
 * _strcpy - A function that copies a string from src to dest
 *@dest: Pointer to copy string to.
 *@src: Pointer to copy string from.
 *Return: void
 */

void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
}

