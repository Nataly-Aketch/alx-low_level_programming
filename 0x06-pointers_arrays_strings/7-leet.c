#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string int0 1337
 * @s: string to be encoded
 * Return: encoded string s
 */

char *leet(char *s)
{
	int i = 0, j;
	char str[] = "aAeEoOtTlL";
	char str1[] = "4433007711";

	for (; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (str[j] == s[i])
			{
				str[i] = str1[j];
			}
		}
	}
	return (s);
}
