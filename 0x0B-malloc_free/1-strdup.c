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
	unsigned int i;
	unsigned int len = 0;
	char *mem_al;

	if (!str)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		len += 1;
		str++;
	}

	mem_al = (char *) malloc(sizeof(char) * (len + 1));
	if (mem_al == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		mem_al[i] = str[i];
	}
	mem_al[i] = '\0';
	return (mem_al);
}
