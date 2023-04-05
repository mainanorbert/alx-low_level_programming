#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to a string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')	/*end of string/acts as base case for recursive function*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);	/*prints current character*/
	_puts_recursion(++s);	/* recursively calls next character*/
}
