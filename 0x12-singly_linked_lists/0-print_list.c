#include "lists.h"
/**
 * print_list - prints number of elements in list
 * @h: the list to be printed
 * Return: returns size of nodes
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;
	/*list_t myhead =  h;*/

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
