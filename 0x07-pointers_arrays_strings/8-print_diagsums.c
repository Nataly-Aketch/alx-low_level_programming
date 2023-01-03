#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of two diagonals of a
 * square matrix
 * @a: array of integers
 * @size: array size
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum1 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum1 += a[i];
	}
	printf("%d, %d\n", sum, sum1);
}
