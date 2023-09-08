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
	unsigned long int idx, i;
	char *value_cpy, *key_cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	value_cpy = strdup(value);
	if (value_cpy == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	i = idx;
	while (ht->array[idx])
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
		i++;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(value_cpy);
		return (0);
	}
	key_cpy = strdup(key);
	new_node->key = key_cpy;
	new_node->value = value_cpy;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
