#include "main.h"
#include <stdio.h>

/**
 * strlen - function that returns length of a string
 * @s: string
 */

int _strlen(char *s)
{
	int i, count = 0;
	char x[];
	s = x;

	while (x[i] != '\0')
	{
		count++;
		i++;
	}
	return count++;
}
int main()
{
	char *str;
	int len;

	str = "My first strlen!";
	printf("%d\n", len);
}
