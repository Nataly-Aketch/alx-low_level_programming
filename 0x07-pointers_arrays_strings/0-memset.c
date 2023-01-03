#include "main.h"
#include <stdio.h>
/**
 * _memset - files first n bytes of memory area
 * pointed to by s with constants byte b
 * @s: block of memory
 * @b: constant character byte
 * @n: number of bytes
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
