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
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}
