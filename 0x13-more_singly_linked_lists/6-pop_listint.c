#include "lists.h"
/**
 * get_nodeint_at_index - searches a list
 * @head: head node
 * @index: node index
 * Return: index of the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
/**
 * pop_listint - deletes head of a node
 * @head: head node
 * Return: head data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int item;

	if (!*head)
		return (0);
	/*search for head node at index position 0 to pop*/
	temp = get_nodeint_at_index(*head, 0);
	/*the new head now points to whatever temp(intial head) was pointing to*/
	*head = temp->next;
	item = temp->n;
	free(temp);
	return (item);
}
