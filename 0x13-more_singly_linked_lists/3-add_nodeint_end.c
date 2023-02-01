#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of the list
 * @head: head node
 * @n: data
 * Return: new node or NULL or failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (new);
}
