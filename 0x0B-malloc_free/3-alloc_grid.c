#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - prints a 2D array of in
 * @width: array width
 * @height: array height
 * Return: pointer to a 2D array of int or NULL
 */
int **alloc_grid(int width, int height)
{
	int **temp, i;

	if (width <= 0 || height <= 0)
		return (0);
	temp = malloc(width * sizeof(int *));
	if (temp == NULL)
	{
		free(temp);
		return (0);
	}
	for (i = 0; i < width; i++)
	{
		temp[i] = malloc(height * sizeof(int));
		free(temp[i]);
	}
	return (temp);
}
