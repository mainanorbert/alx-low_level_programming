#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: destination sring
 * @src: source string
 * @n: max no. of chars to be copied
 *
 * Return: returns a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/* copy chars from src to dest up to n or \0*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
