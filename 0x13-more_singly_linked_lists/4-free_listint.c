#include "lists.h"

/**
 * free_listint - freeing linked list
 * @head: first node
 */
void free_listint(listint_t *head)
{
	listint_t *del_node;

	while (head)
	{
		del_node = head;
		head = head->next;
		free(del_node);
	}
}
