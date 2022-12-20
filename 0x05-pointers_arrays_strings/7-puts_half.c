#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string literal
 */

void puts_half(char *str)
{
	int m;
	int n;

	m = 0;
	while (str[m] != '\0')
	{
		m++;
	}
	n = 0;
	n = m / 2;
	if (m % 2 != 0)
	{
		n++;
	}
	while (str[n] != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
