#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string literal
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(*str);
		i += 2;
	}
	_putchar('\n');
}
