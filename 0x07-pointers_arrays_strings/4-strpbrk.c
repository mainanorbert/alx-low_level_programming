#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches string for any set of bytes
 * @s: pointer to string
 * @accept: pointer to string to be searched
 *
 * Return: returns pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				return (s + x);
			}
		}
	}
	return (NULL);
}
