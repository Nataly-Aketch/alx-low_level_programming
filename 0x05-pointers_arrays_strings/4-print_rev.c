#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string literal
 */
void print_rev(char *s)
{
	int j = strlen(s);
	int i;
	char *start, *end, temp;
	start = s;
	end = s + j - 1;
	for (i = 0; i < j /2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
	putchar(*s++);
	putchar('\n');
}
int main()
{
	char *str;
	str = "Inshallah";
	print_rev(str);
}
