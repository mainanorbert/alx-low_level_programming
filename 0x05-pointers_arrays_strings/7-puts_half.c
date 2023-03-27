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
	int strt = len / 2;
	
	if (len % 2 != 0)
	{
		strt = (len - 1) / 2;
	}
	int i;

	for (i = strt; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
