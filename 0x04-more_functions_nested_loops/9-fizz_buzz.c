#include <stdio.h>

/**
 * fizzbuzz - checks for multiples of 3, 5 and 15
 * and prints Fizz, Buzz, FizzBuzz respectively.
 */

void fizzbuzz(void)
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
/**
 * main - checks function
 * Return: o success
 */
int main(void)
{
	fizzbuzz();

	return (0);
}
