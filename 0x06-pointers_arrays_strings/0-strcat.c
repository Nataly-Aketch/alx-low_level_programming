#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	/*till it doesn't point to a NULL*/
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
