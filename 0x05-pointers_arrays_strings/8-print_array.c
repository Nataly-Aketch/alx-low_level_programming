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

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}
