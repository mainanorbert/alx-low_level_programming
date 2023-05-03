#include "lists.h"

/**
 * reverse_listint - reversing list
 * @head: pointer to first node in list
 * Return: pointer to first node reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_n;
	listint_t *prev_n = NULL;
	listint_t *curr_n = *head;

	while (curr_n != NULL)
	{
		next_n = curr_n->next;
		curr_n->next = prev_n;
		prev_n = curr_n;
		curr_n = next_n;
	}
	*head = prev_n;
	return (*head);
}
