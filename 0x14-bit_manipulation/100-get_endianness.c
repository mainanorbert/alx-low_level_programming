#include "main.h"
/**
 * get_endianness - checks endianness of
 * Return: returns 0 big endian, 1 little india
 */
int get_endianness(void)
{
	int y;
	char *endian;

	y = 1;
	endian = (char *)&y;

	if (*endian == 1)
		return (1);
	else
		return (0);
}
