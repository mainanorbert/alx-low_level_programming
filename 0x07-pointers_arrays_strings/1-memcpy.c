#include "main.h"
/**
 * _memcpy - compies n bytes of memory area
 *
 * @dest: destination memory area
 * @src: source memory area;
 * @n: no of bytes to be copied
 * Return: returns dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
