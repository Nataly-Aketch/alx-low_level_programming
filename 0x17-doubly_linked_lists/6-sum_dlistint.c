#include "lists.h"
/**
 * sum_dlistint - sums linked list elements
 * @head: head node
 * Return: sum of list elements
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
