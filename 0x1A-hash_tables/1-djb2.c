#include "hash_tables.h"
/**
 * hash_djb2 - implementation of the djb2 algorithm/generating hash values
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_value;
	int c;

	hash_value = 5381;
	while ((c = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + c; /* hash_value * 33 + c */
	}
	return (hash_value);
}
