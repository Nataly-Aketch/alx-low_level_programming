#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *head;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		head = ht->array[i];
		while (head)
		{
			if (j != 0)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			j++;
			head = head->next;
		}
		i++;
	}
	printf("}\n");
}
