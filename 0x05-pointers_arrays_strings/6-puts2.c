#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string literal
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		putchar(*str);
		str += 2;
	}
	putchar('\n');
}
