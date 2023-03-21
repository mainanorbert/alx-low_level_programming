#include "main.h"
/**
 *print_alphabet_x10 - prints a-z 10 times
 *
 *Return: returns 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
	return (0);
}
