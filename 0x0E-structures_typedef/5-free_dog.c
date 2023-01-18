#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d: struct to be freed
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
