#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of hash table
 * Return: new hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	unsigned long int i;
	hash_node_t **items;

	if (!new_table)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(*items) * new_table->size);
	if (!new_table->array)
		return (NULL);
	for (i = 0; i < new_table->size; i++)
		new_table->array[i] = NULL;
	return (new_table);
}
