#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns length of a string
 * @s: string
 * Return: count i.e. length of string literal
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
