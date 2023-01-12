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

	temp = malloc(width * height * sizeof(int));
	if (temp == NULL)
		return (0);
	for (i = 0; i < width; i++)
		temp[i] = malloc(height * sizeof(int));
	return (temp);
}
