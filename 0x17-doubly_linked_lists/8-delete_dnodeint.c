#include "lists.h"
/**
 * get_dnodeint_at_index - searches an element
 * @head: head node
 * @index: index position
 * Return: found node or Null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (0);
	while (head && index > count)
	{
		count++;
		head = head->next;
	}
	return (head);
}
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: pointer to head node
 * @index: index for deletion
 * Return: 1 on success 0 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev1, *popit;

	if (index == 0 && *head)
	{
		popit = *head;
		if (popit == NULL)
			return (-1);
		*head = popit->next;
		free(popit);
		return (1);
	}
	prev1 = get_dnodeint_at_index(*head, index - 1);
	popit = get_dnodeint_at_index(*head, index);
	if (!prev1 || !popit)
		return (-1);
	prev1->next = popit->next;
	popit->next->prev = prev1;
	free(popit);
	return (1);
}
