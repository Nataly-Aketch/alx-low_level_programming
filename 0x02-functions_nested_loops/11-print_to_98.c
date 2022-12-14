#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints values from 98
 * and to 98.
 *
 * @n: integer to be checked
 * Return: 0 success
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			printf("\n");
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			printf("\n");
			n--;
		}
	}
}
