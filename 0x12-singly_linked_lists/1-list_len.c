#include "lists.h"
/**
 * list_len - returns no of elements in list
 * @h:head to a list
 * Return: returns number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elmts = 0;
while (h != NULL)
{
	elmts++;
	h = h->next;
}
return (elmts);
}
