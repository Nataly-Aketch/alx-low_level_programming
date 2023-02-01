#include "lists.h"
/**
 * add_nodeint - add a new node at the beginning of a list
 * @head: head node
 * @n: list items
 * Return: new node or NULL on success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
