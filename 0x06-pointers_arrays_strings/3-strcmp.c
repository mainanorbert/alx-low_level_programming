#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first pointer to a string
 * @s2: second pointer to a string
 *
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	for (; (*s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
