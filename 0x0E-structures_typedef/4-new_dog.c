#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	char *alias, *own;
	unsigned int i, j;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL || !name || !owner)
	{
		return (0);
	}
	alias = malloc(sizeof(char) * (strlen(name) + 1));
	if (alias == NULL)
	{
		return (0);
	}
	for (i = 0; name[i]; i++)
		alias[i] = name[i];
	own = malloc(sizeof(char) * (strlen(owner) + 1));
	if (own == NULL)
	{
		return (0);
	}
	for (j = 0; owner[j]; j++)
	{
		own[j] = owner[j];
	}
	doggy->name = name;
	doggy->age = age;
	doggy->owner = owner;
	free(doggy);
	free(alias);
	free(own);
	return (doggy);
}
