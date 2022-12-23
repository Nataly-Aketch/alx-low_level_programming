#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * reverse_array - reverses content of an array of integers
 * @a: array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int low, high, temp;

	for (low = 0, high = n - 1; low < high; low++, high--)
	{
		temp = a[low];
		a[low] = a[high];
		a[high] = temp;
	}
}
