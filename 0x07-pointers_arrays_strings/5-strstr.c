#include <stdio.h>
#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched in
 * @needle: substring to be searched for
 * Return: returns a pointer to first occurrence of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;

		while (needle[j] != '\0' && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
		if (!needle[j])
			return (haystack);
	}
	return ('\0');
}
