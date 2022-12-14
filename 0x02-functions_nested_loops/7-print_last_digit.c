#include "main.h"

/**
 * print_last_digit - prints last digit of number using
 * _putchar.
 * @i: integer data type for variable.
 *
 * Return: Value of last digit.
 */

int print_last_digit(int i)
{
	int l = i % 10;

	if (i < 0)
		i = -i;
	if (l < 0)
		l = -l;
	_putchar(l + '0');
	return (i % 10);
}
