#include "main.h"

/**
 *_islower - checks lower case letters
 *@c: value to return
 *
 * Return: returns integer for succes
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
