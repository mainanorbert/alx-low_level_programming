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
/**
 * _strspn - gets length of prefix substring
 * @s: pointer to a string
 * @accept: string to be compared
 *
 * Return: returns unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
	}
	return (i);
}

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
