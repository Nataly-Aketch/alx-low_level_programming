#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string literal
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen(s); j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
