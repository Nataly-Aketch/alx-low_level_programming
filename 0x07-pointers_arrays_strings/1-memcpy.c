#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination to be copied to
 * @src: source to be copied from
 * @n: number of times
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
