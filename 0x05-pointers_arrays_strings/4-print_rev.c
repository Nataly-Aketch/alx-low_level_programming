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

	while (s[i] != '\0')
		i++;
	while (j >= s[m])
	{
		_putchar(s[j]);
		j++;
	}
	_putchar('\n');
}
