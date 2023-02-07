#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: number
 * @index: index position
 * Return: index or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
