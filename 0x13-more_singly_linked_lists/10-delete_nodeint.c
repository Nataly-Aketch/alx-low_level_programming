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
/**
 * delete_nodeint_at_index - pops node at a specific index
 * @head: head node
 * @index: given index
 * Return: 1 on success -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *popit, *prev;

	if (*head && index == 0)
	{
		popit = get_nodeint_at_index(*head, index);
		*head = popit->next;
		free(popit);
		return (1);
	}
	else
	{
		prev = get_nodeint_at_index(*head, index - 1);
		popit = get_nodeint_at_index(*head, index);
		if (!prev || !popit)
			return (-1);
		prev->next = popit->next;
		free(popit);
		return (1);
	}
	return (-1);
}
