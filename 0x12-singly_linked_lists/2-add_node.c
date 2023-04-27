#include "lists.h"
/**
 * add_node - adds new node
 * @head: pointer to list_t
 * @str: new string to be added
 * Return: returns address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *new_el;

	while (str[i] != '\0')
		i++;
	new_el = malloc(sizeof(list_t));
	if (new_el == NULL)
		return (NULL);
	new_el->str = strdup(str);
	new_el->len = i;
	new_el->next = (*head);
	*head = new_el;
return (*head);
}
