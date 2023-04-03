#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in string
 *
 * @s: string to search
 * @c: character to be returned
 *
 * Return: returns pointer to first occurance c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
