#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: pointer to string literal
 */
void print_rev(char *s)
{
	int i = 0, j = strlen(s), k = j - 1;
	char temp;

	for (i = 0; i < k; i++)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		k--;
	}
	printf("%s\n", s);
}
int main()
{
	char *str;
	str = "Inshallah";
	print_rev(str);
}
