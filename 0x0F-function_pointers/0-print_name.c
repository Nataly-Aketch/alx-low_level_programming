#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * f - prints name
 * @str: name to be printed
 */
void f(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		printf("%c\n", str[i]);
}
/**
 * print_name - prints name
 * @name: name to be printed
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
