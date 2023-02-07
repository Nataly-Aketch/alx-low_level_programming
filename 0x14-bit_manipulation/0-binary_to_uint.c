#include "main.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: array of 1s and 0s
 * Return: decimal number or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	int j, mul = 1;
	unsigned int decinum = 0;

	if (!b)
		return (0);
	j = strlen(b) - 1;
	for (; j >= 0; j--)
	{
		if (b[j] != '1' && b[j] != '0')
			return (0);
		if (b[j] == '1')
			decinum += mul;
		mul *= 2;
	}
	return (decinum);
}
