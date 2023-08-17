#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at given index
 * @h: pointer to pointer of first node
 * @idx: index st which to insert
 * @n: integer to insert
 * Return: address of new node on NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h, *new;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*h == NULL || idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	while (idx != 1)
	{
		current = current->next;
		if (current == NULL)
			return (NULL);
		idx--;
	}
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;
	return (new);
}

