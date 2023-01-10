#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies a string given as parameter
 * @str: string to be duplicated
 * Return: pointer to a new string which is a duplicate of str,
 * NULL is str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int n = sizeof(ptr);

	ptr = malloc(n * sizeof(char));
	if (ptr == NULL)
		return (0);
	while (*ptr)
	{
		*ptr = *str;
		ptr++;
	}

	return (str);
}
