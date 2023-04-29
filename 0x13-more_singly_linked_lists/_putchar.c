#include <unistd.h>
/**
 * _putchar - prints single character
 * @c: character to print
 * Return: returns integer
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

