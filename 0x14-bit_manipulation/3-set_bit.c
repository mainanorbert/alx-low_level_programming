#include "main.h"

/**
 * set_bit - sets value of bit to 1 at given index
 * @n: pointer to unsigned longer int
 * @index: index at which 1 is substituted
 * Return: 1 if changed and -1 for fail;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8 - 1))
		return (-1);	/*returns -1 if out of range*/
	*n = *n | 1lu << index;	/*shifts 1 index times and exclusive or*/
	return (1);
}
