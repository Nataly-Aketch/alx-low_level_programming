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
	/*till it doesn't point to a NULL*/
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}
