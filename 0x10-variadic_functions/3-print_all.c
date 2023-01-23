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
	int j = 0, len = strlen(format);
	char *string;

	va_start(ap, format);
	while (j < len)
	{
		if (j < len && j > 0 && format[j] && (format[j] == 'c' || format[j] == 'i'
		|| format[j] == 's' || format[j] == 'f'))
			printf(", ");
		switch (format[j])
		{
			case ('i'):
				printf("%d", va_arg(ap, int));
				break;
			case ('c'):
				printf("%c", va_arg(ap, int));
				break;
			case ('f'):
				printf("%f", va_arg(ap, double));
				break;
			case ('s'):
				string = va_arg(ap, char *);
				if (!string)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		j++;
	}
	printf("\n");
}
