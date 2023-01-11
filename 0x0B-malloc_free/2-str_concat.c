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
char *str_concat(char *s1, char *s2);
int main()
{
	char *dest, *src;
	dest = "Love";
	src = " Bruno";
	while (*dest == '\0')
	{
		while (*src)
		{
		*dest = *src;
		*src++;
		}
		*dest++;
	}
	printf("%s", dest);
}
