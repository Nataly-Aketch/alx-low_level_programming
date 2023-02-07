#include "main.h"
/**
 * set_bit - sets a value of a bit to 1
 * @n: array of int
 * @index: index position
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= 1 << index;
	return (1);
}
