#include <stdio.h>

/**
 * main - prints all possible combos
 * of single digits separated by a comma.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i > 0)
		{
			putchar(',');
		}
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
