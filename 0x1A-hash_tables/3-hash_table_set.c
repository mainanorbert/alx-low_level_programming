#include "hash_tables.h"
/**
 * hash_table_set - function adding element to hash table
 * @ht: pointer to the hash_table
 * @key: key to be stored/cannot be empty string
 * @value: value to be stored
 * Return: 1 for success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	while (ht->array[idx])
	{
		if (strcmp(ht->array[idx]->key, key) == 0)
		{
			free(ht->array[idx]->value);
			ht->array[idx]->value = strdup(value);
			if (ht->array[idx]->value == NULL)
				return (0);
			return (1);
		}
		idx++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key), free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
