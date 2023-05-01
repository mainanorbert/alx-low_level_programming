#include "lists.h"
/**
 * pop_listint - deletes head node and returns its data(n)
 * @head: first node in list
 * Return: 0 if empty and one if deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_n;
	int n;

	if (*head == NULL || head == NULL)
		return (0);
	n = (*head)->n;
	temp_n = (*head)->next;
	free(*head);
	*head = temp_n;
	return (n);
}
