#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: string
 * @accept: substring to look for
 * Return: returns number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
				break;
		}
		if (!accept[j])
		break;
	}
	return (i);
}
