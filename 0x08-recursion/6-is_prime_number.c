#include <stdio.h>
#include "main.h"

/**
 * is_prime_number - checks if n is prime
 * @n: integer to checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2)
		return (0);
	if (n % 2 == 0 || is_prime_number(n - 1))
		return (0);
	else
		return (1);
}
