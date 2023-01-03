#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be searched
 * @accept: bytes to be searched
 * Return: returns a pointer to the bytes in s
 */
char *_strstr(char *haystack, char *needle)
{
	int i,j;

	for (i = 0, j = 0; haystack[i] != '\0', needle[j] != '\0'; i++, j++)
	{
		if (haystack[i] == needle[j])
			return (needle);
	}
	return ('\0');
}
