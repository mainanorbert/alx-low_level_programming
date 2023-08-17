#include "lists.h"
/**
 * get_dnodeint_at_index - returns nth node of a list
 * @head: pointer to first node
 * @index: index of node returns
 * Return: returns node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	while (head != NULL)
	{
		current = head;
		i++;
		if (i == index)
			return (current->next);
		head = head->next;
	}
	return (current);
}
