#include "main.h"

/**
 * _isupper - checks whether a charcter is uppercase
 * @c: char to be checked
 * Return: 1 is c is uppercase, 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
