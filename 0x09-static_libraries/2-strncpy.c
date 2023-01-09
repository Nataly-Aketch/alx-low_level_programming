#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: returns destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	for ( ; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
