#include "lists.h"

/**
 * delete_nodeint_at_index - delets node at given index
 * @head: pointer to first node
 * @index: index to be inserted
 * Return: 1 for success and -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/*listint_t *del_node;*/
	unsigned int i = 1;
	listint_t *curr_n = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)	/*del special case when index == 1*/
	{
		*head = (*head)->next;
		free(curr_n);
		return (1);
	}

	while (curr_n && i < index)
	{
		if (i == index - 1)
		{
			free(curr_n);
		}
		else
		{
			return (-1);
		}
		curr_n = curr_n->next;
		i++;
	}
	return (1);
}
