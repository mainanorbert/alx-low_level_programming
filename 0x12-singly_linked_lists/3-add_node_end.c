#include "lists.h"
/**
 * add_node_end - adding node at end of list
 * @head: node to list
 * @str: string to add at end
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *last_n = *head;
	unsigned int i = 0;

	while (str[i])
		i++;
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = i;
	new_n->next = NULL;
	if (last_n == NULL)
	{
		*head = new_n;
		return (new_n);
	}
	while (last_n->next)
	{
		last_n = last_n->next;
	}
	last_n->next = new_n;
	return (new_n);
}
