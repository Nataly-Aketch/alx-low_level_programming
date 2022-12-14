#include "main.h"

/**
 * print_times_table - prints multiplication table
 * n times
 * @n: integer to be checked
 */

void print_times_table(int n)
{
	int i, j, k;

	if ((n <= 15) && (n >= 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;

				if (j == 0)
					_putchar(k + '0');
				if (k <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
