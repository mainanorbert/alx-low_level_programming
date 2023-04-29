#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints elements in list
 * @h: pointer to the first node
 * Return: returns number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
