#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string literal
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		2 += str;
	}
	_putchar('\n');
}
