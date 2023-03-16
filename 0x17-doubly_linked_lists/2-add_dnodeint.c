#include "lists.h"
/**
 * add_dnodeint - prepends node
 * @head: pointer to head node
 * @n: node data
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new || !head)
		return (0);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (new->next != NULL)
		new->next->prev = new;
	*head = new;
	return (new);
}
