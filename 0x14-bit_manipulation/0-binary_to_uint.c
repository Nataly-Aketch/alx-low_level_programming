#include "main.h"
/**
 * pow_func - computes x raised to y
 * @x: base
 * @y: exponent
 * Return: power on success
 */
int pow_func(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * pow_func(x, y - 1));
}
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: array of 1s and 0s
 * Return: decimal number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = atoi(b), i = 0, rem, j = 0;
	long int decinum = 0;

	if (b == NULL)
		return (0);
	while (b[j])
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		j++;
	}
	while (n)
	{
		rem = n % 10;
		decinum = decinum + rem * pow_func(2, i);
		i++;
		n /= 10;
	}
	return (decinum);
}
