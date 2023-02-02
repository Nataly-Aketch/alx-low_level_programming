#include "lists.h"
/**
 * get_nodeint_at_index - searches a list
 * @head: head node
 * @index: node index
 * Return: index of the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
