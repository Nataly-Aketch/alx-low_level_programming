#include <string.h>
#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string literal
 */

void puts_half(char *str)
{
	int i = 0;
	int len = strlen(str);
	int mid = len / 2;
	int mid2 = len - mid;
	int j = mid2 + 1;

	if (str[i] != '\n')
	{
		while (j > mid)
		{
			putchar(str[j]);
			j++;
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
