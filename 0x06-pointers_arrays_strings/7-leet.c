#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string int0 1337
 * @s: string to be encoded
 * Return: encoded string s
 */

char *leet(char *s)
{
	int i, j;
	char str[] = "aAeEoOtTlL";
	char str1[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[j] == str1[i])
			{
				str[i] = str1[j];
			}
		}
	}
	return (s);
}
