#include "main.h"
/**
 * print_triangle - prints triangle
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size > 0)
	{
		for (x = 0; x <= size; x++)
		{
			for (y = 0; y <= x; y++)
			{
				for (z = size; z >=0; z--)
				{
					_putchar(' ');
				}
				_putchar('#');
				_putchar('\n');
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
