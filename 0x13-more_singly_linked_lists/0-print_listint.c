#include "lists.h"
/**
 * print_listint - print all elements of a list
 * @h: head node
 * Return: number of elements in a list
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
