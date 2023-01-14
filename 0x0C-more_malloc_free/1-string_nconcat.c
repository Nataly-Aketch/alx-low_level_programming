#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: destination string
 * @s2: source string
 * @n: length of s2 to be printed
 * Return: pointer to concatenated string or NULL
 * on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, len3;
	char *temp;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
		n = len2;
	len3 = len1 + n;
	temp = malloc((len3 + 1) * sizeof(char));
	if (temp == NULL)
		return (0);
	for (i = 0; i < len1; i++)
	{
		temp[i] = s1[i];												}
	for (i = 0; i < len3; i++)
	{
		temp[i + len1] = s2[i];
	}
	temp[i] = '\0';
	return (temp);
}
