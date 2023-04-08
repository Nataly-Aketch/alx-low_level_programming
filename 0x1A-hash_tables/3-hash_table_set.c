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
	hash_node_t *head = NULL;

	if (!new_node || !ht)
		return (0);
	hash = key_index((unsigned char *)key, ht->size);
	head = ht->array[hash];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (!value)
				return (0);
			return (1);
		}
		head = head->next;
	}
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[hash];
	ht->array[hash] = new_node;
	return (1);
}
