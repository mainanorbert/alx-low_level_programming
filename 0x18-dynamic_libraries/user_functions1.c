#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
/**
 * _abs - prints an absolute of a number
 *
 * Return: returns an integer
 * @a: value returned
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
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
