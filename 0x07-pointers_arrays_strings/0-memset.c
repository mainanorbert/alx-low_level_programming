#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: pointer to b
 * @b: constant byte
 * @n: firt number of bytes to be filled
 * Return: retursn a string with added bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
