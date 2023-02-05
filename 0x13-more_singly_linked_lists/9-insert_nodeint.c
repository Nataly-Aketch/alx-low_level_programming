#include "lists.h"
/**
 * get_nodeint_at_index - searches a list
 * @head: head node
 * @index: node index
 * Return: index of the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 1;

	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
/**
 * insert_nodeint_at_index - inserts node at a specific point
 * @head: head node
 * @idx: index position
 * @n: new data
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev;
	unsigned int i = sizeof(listint_t);

	if ((!(*head) && idx != 0) || idx < i)
		return (0);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		prev = get_nodeint_at_index(*head, idx);
		new->next = prev->next;
		prev->next = new;
	}
	return (new);
}
