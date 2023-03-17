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
	dlistint_t *prev1, *after;

	if (index == 0)
	{
		after = get_dnodeint_at_index(*head, 1);
		after->prev = NULL;
		after->next->prev = after;
		*head = after;
		return (1);
	}
	prev1 = get_dnodeint_at_index(*head, index - 1);
	after = get_dnodeint_at_index(*head, index + 1);
	if (!prev1 && !after)
		return (0);
	prev1->next = after;
	after->prev = prev1;
	return (1);
}
