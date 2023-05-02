#include "main.h"

/**
 * print_to_98 - prints from n to 98
 *
 * @n: the value that is entered
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		print_decimal(98);
		_putchar('\n');
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			print_decimal(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			print_decimal(n);
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}
}
