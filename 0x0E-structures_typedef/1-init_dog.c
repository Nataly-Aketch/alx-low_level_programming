#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of struct dog
 * @d:structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
