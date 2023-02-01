#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: head node
 * Return: number of elements in a list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
