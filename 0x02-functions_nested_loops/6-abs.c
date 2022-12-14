#include "main.h"

/**
 * _abs - computes absolute value of an integer.
 *
 * @i: integer to be checked
 * Return: -i if i is negative i if i is positive.
 *
 */
int _abs(int i)
{
	if (i < 0)
		return (-i);
	else
		return (i);
}
