#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 * @size: array size
 * @c: char to be initialized with
 * Return: NULL is size is 0, pointer to array
 * or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		if (arr == NULL)
			return (0);
		arr[i] = c;
	}
	return (arr);
}
