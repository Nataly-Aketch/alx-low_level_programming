#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string literal
 */

void puts_half(char *str)
{
	int i = 0, j;
	int len = strlen(str);
	int mid = len / 2;

	if (str[i] != '\n')
	{
		for (j = mid - 1; j > mid; j--)
		{
			putchar(str[j]);
		}
	}
	putchar('\n');
}
int main()
{
	char *str;
	str = "012345678";
	puts_half(str);
	return 0;
}
