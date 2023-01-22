#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_all -  prints anything
 * @format: string of specifiers
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int integer;
	int j;
	int len = strlen(format);
	char character;
	float decimal;
	char *string;

	va_start(ap, format);
	j = 0;
	while (j < len)
	{
		if (j != '\0')
			printf(", ");
		if (format[j] == 'i')
		{
			integer = va_arg(ap, int);
			printf("%d", integer);
		}
		else if (format[j] == 'c')
		{
			character = (char)va_arg(ap, int);
			printf("%c", character);
		}
		if (format[j] == 'f')
		{
			decimal = va_arg(ap, double);
			printf("%f", decimal);
		}
		else if (format[j] == 's')
		{
			string = va_arg(ap, char *);
			printf("%s", string);
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
