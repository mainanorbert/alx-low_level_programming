#include "hash_tables.h"
/**
 * hash_table_delete - function deleting hash table
 * @ht: pointer to hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_table_t *head = ht;
	hash_node_t *my_node, *current;

	while (i < ht->size)
	{
		my_node = ht->array[i];
		while (my_node)
		{
			current = my_node;
			my_node = my_node->next;
			free(current->key);
			free(current->value);
			free(current);
		}
		i++;
	}
	free(head->array);
	free(head);
}

