#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to string 2
 * Return: pointer to newly alloacted string with the 2 strings
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1 = strlen(s1), len2 = strlen(s2);
	char *mem_al;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	mem_al = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (mem_al == NULL)
	{
		return (NULL);
	}
	memcpy(mem_al, s1, len1);
	memcpy(mem_al + len1, s2, len2 + 1);
	return (mem_al);
}
