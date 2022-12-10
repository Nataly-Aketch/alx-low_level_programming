#include <stdio.h>

/**
 * main - prints all possible three combos of
 * a number using a nested while loop
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1 = 0;

	while (num1 < 8)
	{
		int num2 = num1 + 1;

		while (num2 < 9)
		{
			int num3 = num2 + 1;

			while (num3 <= 9)
			{
				putchar (num1 + '0');
				putchar (num2 + '0');
				putchar (num3 + '0');
				if (num1 != 7)
				{
					putchar (',');
					putchar (' ');
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
