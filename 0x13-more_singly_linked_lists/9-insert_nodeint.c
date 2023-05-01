#include "lists.h"
/**
 * insert_nodeint_at_index - inserting new node
 * @head: pointer to the first node
 * @idx: index the node will be added
 * @n: the value of node
 * Return: returns node to be added
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp_n = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (temp_n && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = temp_n->next;
			temp_n->next = new;
			return (new);
		}
		else
			temp_n = temp_n->next;
	}
	return (NULL);
}
