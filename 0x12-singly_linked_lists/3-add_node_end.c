#include "lists.h"
#include <string.h>
/**
 * add_node_end - adds node at the end
 * @head: pointer to pointer to head
 * @str: new data
 * Return: new address or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	int len = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->str = strdup(str);
	if (!str)
	{
		free(new_node);
		return (0);
	}
	while (str[len])
		len++;
	new_node->len = len;
	/*makes the new now point to NULL being the last node*/
	new_node->next = NULL;
	/*check if the list is empty and make the new node as head*/
	if (!*head)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next)
			/*moves the last pointer to point to the next node and not NULL*/
			last = last->next;
		/*the last pointer now points to the new appended node*/
		last->next = new_node;
	}
	return (new_node);
}
