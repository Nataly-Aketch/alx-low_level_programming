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
	hash_node_t *head, *last;

	if (!new_node)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	head = ht->array[hash];
	new_node->value = strdup(value);
	new_node->next = NULL;
	if (!head)
	{
		head = new_node;
		return (1);
	}
	else
	{
		last = head;
		while (last->next)
			last = last->next;
		last->next = new_node;
		return (1);
	}
	return (0);
}
