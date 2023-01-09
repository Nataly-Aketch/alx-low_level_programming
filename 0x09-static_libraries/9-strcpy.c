#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies strings
 * @dest: buffer to be copied on
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	/*makes sure dest is null terminated*/
	dest[i] = '\0';
	return (dest);
}
