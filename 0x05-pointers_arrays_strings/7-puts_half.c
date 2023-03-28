#include <string.h>
#include "main.h"
/**
 * puts_half - prints half a string
 *
 * @str: pointer to a string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int i, strt;

	if (len % 2 == 1)
	{
		strt = (len + 1) / 2;
	}
	else
	{
		strt = len / 2;
	}
	for (i = strt; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
