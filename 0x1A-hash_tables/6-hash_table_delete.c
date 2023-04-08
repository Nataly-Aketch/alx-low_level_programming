#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *head, *temp;

	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			temp = head;
			head = head->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
