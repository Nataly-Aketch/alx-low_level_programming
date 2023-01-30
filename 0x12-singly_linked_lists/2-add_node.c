#include "lists.h"
#include <string.h>
/**
 * add_node - adds node to at the beginning of a list
 * @head: pointer to pointer to head of list
 * @str: new data
 * Return: new or address or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (0);
	new_node->str = strdup(str);
	if (!str)
	{
		free(new_node);
		return (0);
	}
	while (str[length])
		length++;
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
