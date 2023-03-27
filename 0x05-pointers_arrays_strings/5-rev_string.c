#include "main.h"
#include <string.h>

/**
 * rev_string - reservses a string
 * @s: a pointer to a string
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
