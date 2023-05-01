#include "lists.h"

/**
 * sum_listint - sums elements of list
 * @head: the first node
 * Return: returns sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	int n;

	if (head == NULL)
		return (0);
	while (head)
	{
		n = head->n;
		sum += n;
		head = head->next;
	}
	/*printf("sum = %d", sum);*/
	return (sum);
}
