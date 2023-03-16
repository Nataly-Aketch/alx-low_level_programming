#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *last;

	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}
	return (new);
}
