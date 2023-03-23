#include "main.h"
/**
 * print_diagonal - prints diagnol
 * @n: number of times / is printed
 */
void print_diagonal(int n)
{
	int x, y;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('\n');
			for (y = 0; y < x; y++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
	}
	else
	{
		_putchar('\n');
	}
}
