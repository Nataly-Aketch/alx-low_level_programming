#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates and array of integers
 * @min: starting point
 * @max: endpoint
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);

}
