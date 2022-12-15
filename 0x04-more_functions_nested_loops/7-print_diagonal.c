#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
		}
		putchar('\n');
	}
	else
		putchar('\n');
}
int main(void)
{
	print_diagonal(0);
	print_diagonal(-4);
	print_diagonal(2);
	print_diagonal(10);
}
