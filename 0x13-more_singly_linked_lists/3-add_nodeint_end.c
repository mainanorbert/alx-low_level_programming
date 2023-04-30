#include "lists.h"
/**
 * add_nodeint_end - adds node at end of list
 * @head: first node
 * @n: the integer to add to the list
 * Return: returns added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *mynode = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (mynode->next)
	{
		mynode = mynode->next;
	}
	mynode->next = new;
	return (new);
}
