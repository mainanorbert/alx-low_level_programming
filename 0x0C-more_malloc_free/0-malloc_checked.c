#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 *
 * @b: size of memory allocated
 * Return: returns pointer to allocated mem.
 */
void *malloc_checked(unsigned int b)
{
	size_t *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
