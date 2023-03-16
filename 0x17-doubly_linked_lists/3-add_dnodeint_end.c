#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head: pointer to head node
 * @n: node data
 * Return: new node
 */
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
		new->prev = last;
		last->next = new;
	}
	return (new);
}
