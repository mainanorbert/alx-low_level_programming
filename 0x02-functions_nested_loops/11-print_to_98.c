#include "main.h"
/**
 * print_to_98 - prints from n to 98
 *
 * @n: the value that is entered
 */
void print_to_98(int n)
{
	int x = 98;

	if (n >= 98)
	{
		for (x = 98; x <= n; x++)
		{
			_putchar((n / 10));
			_putchar((n % 10));
			_putchar(',');
		}
	}
	else if (n < 98)
	{
		for(x = n; x <= 98; x++)
		{
			if ((x / 10) == 0)
			{
				_putchar(x + '0');
				_putchar(',');
				_putchar(',');
			}
			else
			{
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
