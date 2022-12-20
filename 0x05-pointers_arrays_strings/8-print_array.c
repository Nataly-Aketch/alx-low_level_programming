#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of inetegers
 * @a: array of integers to be printed
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;
	int len = sizeof(a) / sizeof(a[0]);

	for (i = 0; i < len; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
}
