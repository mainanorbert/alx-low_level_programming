#include "main.h"
/**
 * print_decimal - prints decimal
 * @num: prints a number
 */

void print_decimal(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 10)
	{
		print_decimal(num / 10);
	}
	_putchar(num % 10 + '0');
}
