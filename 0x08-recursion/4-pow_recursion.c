#include "main.h"

/**
 * _pow_recursion - prints power of a number
 * @x: number to be raised
 * @y:power of x
 * Return: returns power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
