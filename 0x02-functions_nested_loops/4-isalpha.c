#include "main.h"

/**
 * _isalpha - checks whether a character is
 * an alphabet
 * @c: integer to be checked
 *
 * Return: 1 if it's an alphabet, 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
