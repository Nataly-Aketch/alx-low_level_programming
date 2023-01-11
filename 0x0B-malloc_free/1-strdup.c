#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - copies a string given as parameter
 * @str: string to be duplicated
 * Return: pointer to a new string which is a duplicate of str,
 * NULL is str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int n, i;

	if (str == NULL)
		return (NULL);
	n = strlen(str) + 1, i = 0;
	ptr = malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
