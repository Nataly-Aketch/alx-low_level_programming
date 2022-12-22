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
	int i = 0, j = 0;
	/*till it doesn't point to a NULL*/
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	*dest = '\0';
	return (dest);
}
