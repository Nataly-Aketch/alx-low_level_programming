#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strcat - concatenates strings
 * @dest: destination string
 * @src: source string
 * Return: destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
/**
 * argstostr - concatenates all CLI argument
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string or null
 */
char *argstostr(int ac, char **av)
{
	char *temp;
	int i, j, len = 0;

	if (ac == 0 || av == NULL)
		return (0);
	for (i = 1; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len += av[i][j];
	temp = malloc(len * sizeof(char));
	if (temp == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		_strcat(temp, av[i]);
		_strcat(temp, "\n");
	}
	return (temp);
}
