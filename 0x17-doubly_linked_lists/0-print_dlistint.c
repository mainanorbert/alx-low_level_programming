#include "lists.h"
/**
 * print_dlistint - prints elements of dlinked list
 * @h: head of doubly linked list
 * Return: returns number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
