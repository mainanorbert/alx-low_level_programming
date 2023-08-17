#include "lists.h"
/**
 * dlistint_len - returns no of elements in a list
 * @h: head of dlinked list
 * Return: number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
