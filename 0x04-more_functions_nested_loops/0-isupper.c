#include "main.h"

/**
 * _isupper - checks if letter is upper or lower
 *
 * Return: returns 1 or 0
 * @c: value to be returned
 */
int _isupper(int c)
{
	if (c >= 'A'  && c <= 'Z')
	{
		c = 1;
	}
	else if (c >= 'a' && c <= 'z')
	{
		c = 0;
	}
	return (c);
}
