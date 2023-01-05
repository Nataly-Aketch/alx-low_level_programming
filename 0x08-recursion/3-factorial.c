#include "main.h"
#include <stdio.h>

/**
 * factorial - returns factorial of a given number
 * @n: number
 * Return: -1 is n is negative, 1 if n is 0 and
 * factorial otherwise
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
