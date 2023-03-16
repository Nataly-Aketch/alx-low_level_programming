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
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: pointer to head node
 * @idx: position
 * @n: node data
 * Return: new node or Null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *prev1, *after, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	if (*h == NULL)
		*h = new;
	else
	{
		temp = *h;
		prev1 = get_dnodeint_at_index(temp, idx - 1);
		after = get_dnodeint_at_index(temp, idx);
		prev1->next = new;
		new->prev = prev1;
		new->next = after;
		after->prev = new;
		new->next->prev = new;
	}
	return (new);
}
