#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: 1 if little 0 if big
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c == 1)
		return (1);
	return (1);
}
