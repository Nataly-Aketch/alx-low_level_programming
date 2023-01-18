#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * dup - duplicates string
 * @str: string to be duplicated
 * Return: duplicated string or null on failure
 */
char *dup(char *str)
{
	int i;
	char *ptr;

	ptr = malloc((strlen(str) + 1) * sizeof(char));
	if (ptr == NULL)
		return (ptr);
	for (i = 0; str[i]; i++)
		ptr[i] = str[i];
	return (ptr);
}
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

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !name || !owner)
	{
		return (0);
	}
	doggy->name = dup(name);
	doggy->age = age;
	doggy->owner = dup(owner);
	free(doggy);
	return (doggy);
}
