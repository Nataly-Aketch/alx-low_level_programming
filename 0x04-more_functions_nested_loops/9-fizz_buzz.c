#include <stdio.h>

/**
 * main - prints fizz and buzz for multiples of
 * 3 and 5 respectively and FizzBuzz for multiples
 * of both
 * Return: 0 success
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			if (i % 15 == 0)
			{
				printf("FizzBuzz ");
				i++;
			}
			if (i % 3 == 0)
			{
				printf("Fizz ");
				i++;
			}
			if (i % 5 == 0)
			{
				printf("Buzz ");
				i++;
			}
		}
		else
		{
			printf("%d ", i);
			i++;
		}
	}
	printf("\n");
}
