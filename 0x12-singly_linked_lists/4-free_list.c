#include "lists.h"
/**
 * free_list - frees a struct
 * @h: head of the node
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
}
