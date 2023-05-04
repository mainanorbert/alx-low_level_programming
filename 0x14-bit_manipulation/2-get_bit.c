#include "main.h"
/**
 * get_bit - returns value of bit at an index
 * @n: the number to check
 * @index: index to check
 * Return: returns value of of bit 0r -1 fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > (sizeof(unsigned int) * 8) - 1)
		return (-1);
	x = (n >> index) & 1;
	return (x);
}
