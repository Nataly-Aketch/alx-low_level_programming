#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two string
 * @s1: destination string
 * @s2: soyrce string
 * Return: destination string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, n, i;
	char *temp;

	len1 = strlen(s1);
	len2 = strlen(s2);
	n = len1 + len2 + 1;
	temp = malloc((n) * sizeof(char));
	if (temp == NULL)
		return (0);
	for (i = 0; i < n; i++)
		temp[i] = s1[i];
	for (i = 0; i < n; i++)
		temp[i + len1] = s2[i];
	temp[n] = '\0';
	return (temp);
}
