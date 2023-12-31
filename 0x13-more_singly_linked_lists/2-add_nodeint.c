#include "lists.h"

/**
 * add_nodeint - adds node at beginning
 * @head: pointer to first node
 * @n: new element of the node
 * Return: returns new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t  *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
