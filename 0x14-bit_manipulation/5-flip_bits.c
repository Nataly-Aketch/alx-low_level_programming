#include "main.h"
/**
 * flip_bits - number of bits needed to swap two number
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, i = n ^ m;

	while (i)
	{
		if (i & 1)
			count++;
		i >>= 1;
	}
	return (count);
}
