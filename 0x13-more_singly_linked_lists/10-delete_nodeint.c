#include "lists.h"

/**
 * delete_nodeint_at_index - delets node at given index
 * @head: pointer to first node
 * @index: index to be inserted
 * Return: 1 for success and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node = NULL;
	unsigned int i = 0;
	listint_t *curr_n = NULL;

	if (*head == NULL)
		return (-1);
	if (index == 0)	/*del special case when index == 1*/
	{
		curr_n = *head;
		*head = (*head)->next;
		free(curr_n);
		return (1);
	}
	curr_n = *head;
	while (i < index - 1 && curr_n)
	{
		curr_n = curr_n->next;
		i++;
	}
	if (curr_n == NULL)
		return (-1);

	del_node = curr_n->next;
	curr_n->next = del_node->next;
	free(del_node);
	return (1);
}
