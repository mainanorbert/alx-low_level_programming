#include "main.h"
/**
 * print_most_numbers - prints 1-10 except 2 and 4
 */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x == 2 || x == 4)
		{
			x++;
			continue;
		}
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
