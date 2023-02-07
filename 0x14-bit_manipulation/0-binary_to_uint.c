#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: array of 1s and 0s
 * Return: decimal number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	int j;
	unsigned int decinum = 0;

	if (!b)
		return (0);
	j = 0;
	while (b[j])
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		decinum = decinum * 2 + (b[j++] - '0');
	}
	return (decinum);
}
