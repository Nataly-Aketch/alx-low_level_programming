#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - uses n bytes from source string and doesn't null terminate
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Return: returns pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest = '\0';
	return (dest);
}
