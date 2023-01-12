#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all CLI argument
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a new string or null
 */
char *argstostr(int ac, char **av)
{
	char *temp;
	int i, len;

	if (ac == 0 && av == NULL)
		return (0);
	for (i = 1; i < ac; i++)
		len += strlen(av[i]) + 1;
	temp = malloc(len * sizeof(char));
	if (temp == NULL)
		return (0);
	for (i = 0; i < ac; i++)
	{
		strcat(temp, av[i]);
		strcat(temp, "\n");
	}
	return (temp);
}
