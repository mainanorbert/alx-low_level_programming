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
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else if (s1[i] < s2[i])
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
