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
	int n = strlen(str);

	ptr = malloc((n + 1) * sizeof(char));
	while (*ptr)
	{
		if (ptr == NULL)
			return (0);
		*ptr = *str;
		ptr++;
	}
	return (str);
}
