#include "main.h"

/**
 * print_sign - prints sign of a number.
 *
 * @n: integer to be checked.
 *
 * Return: returns 1 if n is greater than 0,
 * returns 0 if n is 0, returns -1 is n is
 * less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
