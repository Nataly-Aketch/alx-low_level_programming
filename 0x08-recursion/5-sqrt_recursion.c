#include "main.h"
#include <stdio.h>
/**
 * _sqr - returns square root of n
 * @n: i squared
 * @i: square root of n
 * Return: i is n is a natural square root, -1
 * if not
 */
int _sqr(int n, int i)
{
	if (n == 0)
		return (0);
	if ((i * i) == n)
		return (i);
	if ((i * i) > n)
		return (-1);
	return (_sqr(n, i + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: -1 if n isn't a square
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
