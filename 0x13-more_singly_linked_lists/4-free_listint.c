#include "lists.h"

/**
 * free_listint - freeing linked list
 * @head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *del_node = NULL;

	while (head != NULL)
	{
		del_node = head;
		head = head->next;
		free(del_node);
	}
}
