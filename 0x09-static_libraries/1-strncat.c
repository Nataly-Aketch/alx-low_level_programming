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
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
