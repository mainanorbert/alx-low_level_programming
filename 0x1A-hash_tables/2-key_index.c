#include "hash_tables.h"
/**
 * key_index - the function returns the index of a key
 * @key: the key to be stored
 * @size: size of array in hash table
 * Return: index where key/value pair is to be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_index;

	key_index = hash_djb2(key) % size;
	return (key_index);
}
