#include "main.h"
/**
 * clear_bit - sets value of bit to 0
 * @n: int pointer
 * @index: index position
 * Return: 1 on success -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
