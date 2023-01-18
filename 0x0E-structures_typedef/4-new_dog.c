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

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (0);
	doggy->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (doggy->name == NULL)
	{
		return (0);
	}
	strcpy(doggy->name, name);
	doggy->age = age;
	doggy->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (0);
	}
	strcpy(doggy->owner, owner);
	return (doggy);
}
