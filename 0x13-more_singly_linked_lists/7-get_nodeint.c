#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of list
 * @head: pointer head node
 * @index: index of node
 * Return: returns nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *mynode = head;
	unsigned int i = 0;

	for (i = 0; i < index && mynode != NULL; i++)
	{
		mynode = mynode->next;
	}
	if (mynode == NULL)
		return (NULL);
	return (mynode);
}
