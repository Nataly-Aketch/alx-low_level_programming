#include "hash_tables.h"
/**
 * key_index - gives you index of key
 * @key: key to be searched
 * @size: size of hashtable
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i = hash_djb2(key);

	return (i % size);
}
