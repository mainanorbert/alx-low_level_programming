#include "lists.h"
/**
 * free_list - frees the list
 * @head: pointer address
 */
void free_list(list_t *head)
{
	/*list_t *cur = head;*/
	list_t *nxt;

	while (head != NULL)
	{
		nxt = head->next;
		free(head->str);
		free(head);
		head = nxt;
	}
}
