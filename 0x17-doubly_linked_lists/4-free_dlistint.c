#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
