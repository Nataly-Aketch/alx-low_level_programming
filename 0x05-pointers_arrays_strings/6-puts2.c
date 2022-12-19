#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: string literal
 */

void puts2(char *str)
{
	if (*str != EOF)
	{
		while (*str != '\0')
		{
			putchar(*str);
			str += 2;
		}
	}
	putchar('\n');
}
int main()
{
	char *s1, *s2;
	s1 = "School";
	puts2(s1);
	s2 = "Gucci Prada";
	puts2(s2);
}
