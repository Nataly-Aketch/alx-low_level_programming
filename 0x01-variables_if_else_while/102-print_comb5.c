#include <stdio.h>

/**
 * main - prints all possible combos of two
 * two digit numbers using putchar.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;

	while (num1 < 100)
	{
		int num2 = 0;

		while (num2 < 100)
		{
			if (num2 > num1)
			{
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 * 100 + num2 != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
