#include "main.h"
/**
 * get_bit - value of bit at an index is returned
 * @n: unsigned int
 * @index: index to to value returned
 * Return: value of of bit 0r -1 when fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > (sizeof(unsigned int) * 8) - 1)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}
