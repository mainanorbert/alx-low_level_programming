
#include "lists.h"

/**
 * listint_len - returns no. of elmts in list
 * @h: linked list to be traversed
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
