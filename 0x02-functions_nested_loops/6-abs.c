#include "main.h"

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
