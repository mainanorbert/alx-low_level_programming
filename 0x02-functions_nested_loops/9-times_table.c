#include "main.h"

/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int x, y, prod;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			prod = x * y;
			if (prod < 10)
			{
				_putchar(' ');
				_putchar((prod % 10) + '0');
				if (y != 9)
{
				_putchar(',');
}
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
				if (y != 9)
				{
				_putchar(',');
}
				_putchar(' ');
}
}
_putchar('\n');
}
}
