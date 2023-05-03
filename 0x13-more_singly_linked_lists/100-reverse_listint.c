#include "lists.h"

/**
 * reverse_listint - reversing list
 * @head: pointer to first node in list
 * Return: pointer to first node reversed
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_n = NULL;
	listint_t *prev_n = NULL;

	while (*head)
	{
		next_n = (*head)->next;
		(*head)->next = prev_n;
		prev_n = *head;
		*head = next_n;
	}

	*head = prev_n;
	return (*head);
}
