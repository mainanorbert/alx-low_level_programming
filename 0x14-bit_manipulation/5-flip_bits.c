#include "main.h"
/**
 * flip_bits - find bit to flip to move from one number to another
 * @n: 1st int
 * @m: 2nd int to move to
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count = 0;

	diff = n ^ m;	/* finds differing bits*/

	while (diff)
	{
		if (diff & 1)
			count++;
		diff = diff >> 1;
	}
	return (count);
}
