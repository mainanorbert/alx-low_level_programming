#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space memory
 * @str: pointer to a string
 * Return: return pointer to newly allocated string
 */
char *_strdup(char *str)
{
	unsigned int i, len = strlen(str) + 1;
	char *mem_al;

	if (!str)
	{
		return (NULL);
	}

	mem_al = malloc(sizeof(char *) * len);

	if (mem_al == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
		mem_al[i] = str[i];
	mem_al[len] = '\0';
	return (mem_al);
}
