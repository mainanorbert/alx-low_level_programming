#include "main.h"

/**
 * print_sign - prints positive negative or 0
 *
 * @n: the value to be checked
 * Return: returns a 0 or a 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
