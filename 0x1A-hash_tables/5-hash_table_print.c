#include "hash_tables.h"
/**
 * hash_table_print - function printing a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *my_node;
	int printed = 0;

	printf("{");
	while (i < ht->size)
	{
		my_node = ht->array[i];
		while (my_node)
		{
			if (printed)
				printf(", ");
			printf("'%s': '%s'", my_node->key, my_node->value);
			printed = 1;
			my_node = my_node->next;
		}
		i++;
	}
	printf("}\n");
}
