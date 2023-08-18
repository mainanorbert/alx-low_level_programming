#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at given index
 * @head: pointer to pointer of the first node
 * @index: index to insert at
 * Return: 1 if deleted and -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head, *del_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (index != 1)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
		index--;
	}
	if (current->next == NULL)
	{
		del_node = current->next;
		free(del_node);
		return (1);
	}
	del_node = current->next;
	current->next = del_node->next;
	current->next->prev = current;
	free(del_node);
	return (1);
}
