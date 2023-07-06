#include "main.h"
/**
 * binary_to_uint - converts binary value to int
 * @b: pointer i0 and 1s string
 * Return: 0 if not binary and a number otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	int idx = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (b[idx] != '\0')
	{
		if (b[idx] < '0' || b[idx] > '1')
			return (0);
		num = num * 2 + (b[idx] - '0');
		idx++;
	}
	return (num);
}
