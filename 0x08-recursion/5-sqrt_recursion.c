#include "main.h"

int square_func(int n, int x);

/**
 * _sqrt_recursion - returns square root of a number
 *
 * @n: number to be returned
 *
 * Return: returns square root
 */
int _sqrt_recursion(int n)
{
	int x = 0;

	if (n < 1)
	{
		return (-1);
	}
	return (square_func(n, x));
}

/**
 * square_func - finding square root of a number
 * @n: integer for square root
 * @x: square root of a number
 * Return: returns square root
 */
int square_func(int n, int x)
{
	if (x * x > n)
	{
		return (-1);
	}
	if (x * x == n)
	{
		return (x);
	}
	else
	{
		return (square_func(n, x + 1));
	}
}
