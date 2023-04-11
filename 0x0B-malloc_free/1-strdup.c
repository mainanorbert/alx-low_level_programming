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
		return (0);
	}
	mem_al = (char *) malloc(sizeof(str) * len);
	if (mem_al == NULL)
	{
		return (0);
	}
	memcpy(mem_al, str, len);
	return (mem_al);
}
