#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hash;
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (!new_node)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	new_node->value = strdup(value);
	if (!value)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	if (!key)
	{
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[hash];
	ht->array[hash] = new_node;
	return (1);
}
