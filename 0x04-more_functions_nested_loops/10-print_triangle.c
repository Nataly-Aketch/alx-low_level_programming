#include "main.h"

/**
 * print_triangle - draws a triangle
 * @size: number of times
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= i; j++)
			{
				_putchar(' ');
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
