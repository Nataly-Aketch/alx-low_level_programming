#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: Split string
 */
char **strtow(char *str)
{
	int i, col, row, total;
	char **temp;

	if (str == NULL || strcmp(str, "") == 0)
		return (NULL);
	total = sizeof(temp);
	col = sizeof(temp[0]);
	row = total / col;
	temp = malloc(row * sizeof(char));
	for (i = 0; i < total; i++)
	{
		temp[i] = malloc(col * sizeof(char));
	}
	return (temp);
}
