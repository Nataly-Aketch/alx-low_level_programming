#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at a specific point
 * @head: head node
 * @idx: index position
 * @n: new data
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int count = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	if (!*head)
		*head = new;
	temp = *head;
	while (temp->next && count < idx)
	{
		count++;
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);

}
