#include <stdio.h>

/**
 * main - prints all possible combos of
 * two digit numbers using putchar function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;

	while (num1 < 9)
	{
		int num2 = num1 + 1;

		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			putchar(',');
			putchar(' ');
			num2++;
		}
		num1++;
	}
		putchar('\n');
		return (0);
}
