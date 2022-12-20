#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string literal
 */
void print_rev(char *s)
{
	int i = 0, j = i - 1;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = i - 1; j >= s[i]; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
