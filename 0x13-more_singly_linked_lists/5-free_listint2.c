#include "lists.h"

/**
 * free_listint2 - frees lists and sets head to null
 * @head: first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *free_curr = *head;
	listint_t *temp;

	if (head == NULL)
		return;
	while (free_curr)
	{
		temp = free_curr;
		free_curr = free_curr->next;
		free(temp);
	}
	*head = NULL;
}
