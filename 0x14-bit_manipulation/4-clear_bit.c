#include "main.h"
/**
 * clear_bit - changes value of bit at given i to 0
 * @n: unsigned int to be manipulated
 * @index: index at which 0 is inserted
 * Return: 1 if changed -1 if not changed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);
	x = ~(1ul << index);
	*n = *n & x;
	return (1);
}
