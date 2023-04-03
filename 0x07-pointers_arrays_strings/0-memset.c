#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to b
 * @b: constant byte
 * @n: firt number of bytes to be filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	
	while (n > 0)
	{
		*ptr += b;
		n--;
	}
	return s;
}
