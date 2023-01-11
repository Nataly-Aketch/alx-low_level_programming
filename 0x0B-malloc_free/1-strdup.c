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
	int n = strlen(str), i = 0;

	if (str == NULL)
		return (0);
	ptr = malloc((n + 1) * sizeof(char));
	while (i < n)
	{
		if (str == NULL)
			return (0);
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
