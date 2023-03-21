#include <stdio.h>

/**
 *_isalpha - checks in upper or lower case
 *@c: the value to be returned
 *
 * Return: returns 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
