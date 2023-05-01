#include "lists.h"

/**
 * free_listint2 - frees lists and sets head to null
 * @head: first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *free_curr;

	if (head == NULL)
		return;
	while (*head)
	{
		free_curr = (*head)->next;
		free(*head);
		*head = free_curr;
	}
	*head = NULL;
}
