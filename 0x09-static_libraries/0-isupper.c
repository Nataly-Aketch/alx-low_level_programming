#include "main.h"

/**
 * _islower - checks whether an integer c
 * is a lowercase letter.
 * @c: an integer value that is checked for
 * lowercase or otherwise.
 * Return: 1 if integer is lowercase 0 if
 * otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
