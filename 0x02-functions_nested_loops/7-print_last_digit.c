#include "main.h"

/**
 * print_last_digit - prints laste digit
 *
 * Return: value of the last number
 * @i: the last number
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	return (k);
}
