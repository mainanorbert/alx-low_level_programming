#include "main.h"
/**
 * _strlen_recursion - prints length of a string
 *
 * @s: pointer to a string
 *
 * Return: returns length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		len = 0;
		return (len);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
