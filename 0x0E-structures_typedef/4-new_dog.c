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
	doggy->name = strdup(name);
	doggy->age = age;
	doggy->owner = strdup(owner);
	return (doggy);
}
