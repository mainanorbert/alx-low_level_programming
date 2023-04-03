#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to string
 * @needle: string to be searched
 *Return: returns pointer
 */
char *_strstr(char *haystack, char *needle)
{
	int x, y;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] != needle[y])
			{
				break;
			}
			if (needle[y] == '\0')
			{
				return (&haystack[x]);
			}
		}
	}
	return (NULL);
}
