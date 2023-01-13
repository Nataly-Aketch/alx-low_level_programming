#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array elements
 * @size: array size
 * Return: NULL on failure or pointer to allocated memory
 * on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (0);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (0);
	for (i = 0; i < nmemb; i++)
	{
	}
	return (ptr);
}
