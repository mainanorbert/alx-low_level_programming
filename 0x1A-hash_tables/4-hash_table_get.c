#include "hash_tables.h"
/**
 * hash_table_get - function that retrieves a value associated with key
 * @ht: pointer to hash table with value/key array
 * @key: key whose value is retrieved
 * Return: pointer to value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *my_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	my_node = ht->array[idx];

	while (my_node)
	{
		if (strcmp(my_node->key, key) == 0)
			return (my_node->value);
		my_node = my_node->next;
	}
	return (NULL);
}
