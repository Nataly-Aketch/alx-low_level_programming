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
		switch (format[j])
		{
			case ('i'):
			{
				printf("%d", va_arg(ap, int));
				break;
			}
			case ('c'):
			{
				printf("%c", va_arg(ap, int));
				break;
			}
			case ('f'):
			{
				printf("%f", va_arg(ap, double));
				break;
			}
			case ('s'):
			{
				if (!string)
					printf("(nil)");
				string = va_arg(ap, char *);
				printf("%s", string);
			}
		}
		if (j != len - 1)
			printf(", ");
		j++;
	}
	printf("\n");
}
