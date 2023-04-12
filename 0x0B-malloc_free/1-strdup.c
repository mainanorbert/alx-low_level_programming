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
	int len = strlen(str) + 1;
	char *mem_al;

	if (str == NULL)
	{
		return (NULL);
	}

	mem_al = (char *) malloc(sizeof(char) * len);

	if (mem_al == NULL)
	{
		return (NULL);
	}
	memcpy(mem_al, str, len);
	return (mem_al);
	free(mem_al);
}
