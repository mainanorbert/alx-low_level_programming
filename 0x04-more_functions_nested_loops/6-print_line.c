#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: number to times the charater should be printed
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
