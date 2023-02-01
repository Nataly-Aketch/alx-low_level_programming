#include "lists.h"
/**
 * sum_listint - calculates sum of elements in linked list
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
