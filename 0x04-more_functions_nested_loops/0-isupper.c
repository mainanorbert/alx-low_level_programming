#include "main.h"

/**
 * _isupper - checks if letter is upper or lower
 *
 * Return: returns 1 or 0
 * @c: value to be returned
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
