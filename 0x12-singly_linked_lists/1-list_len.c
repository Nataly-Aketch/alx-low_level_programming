#include "lists.h"
/**
 * list_len - returns length of list
 * @h: pointer to head node
 * Return: length of list
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
