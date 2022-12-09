#include <stdio.h>

/**
 * main - prints single digit numbers
 * to base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
