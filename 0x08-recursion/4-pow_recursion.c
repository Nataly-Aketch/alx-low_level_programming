#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns x raised to y
 * @x: value
 * @y: power
 * Return: -1 is y is less than 0, 1 if y is 0
 * and x raised to power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
