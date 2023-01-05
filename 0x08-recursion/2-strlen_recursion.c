#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns length of a string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		return (count + _strlen_recursion(s + 1));
	}
}
