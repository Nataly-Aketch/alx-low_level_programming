#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a newline
 * @separator: string to be printed between numbers
 * @n: number of items to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator)
			putchar(*separator);
		if (i != n - 1)
			putchar(' ');
	}
	printf("\n");
}
