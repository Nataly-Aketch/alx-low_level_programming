#include "hash_tables.h"
/**
 * hash_table_get - finds value associated with key
 * @ht: hash table
 * @key: key
 * Return: value or NULL if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash;
	hash_node_t *head = NULL;

	if (!ht)
		return (NULL);
	hash = key_index((unsigned char *)key, ht->size);
	head = ht->array[hash];
	if (!head)
		return (NULL);
	while (head)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
