#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate two strings
 *
 * @dest: destination pointer
 * @src: this is the source pointer of the
 * @n: uses n bytes from src
 *
 * Return: returns a string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *end = dest + strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		end[i] = src[i];
	}
	return (dest);
}
