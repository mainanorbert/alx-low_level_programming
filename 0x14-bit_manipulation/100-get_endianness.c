#include "main.h"
/**
 * get_endianness - checks endianness
 * Return: returns 0 big endian, 1 little india
 */
int get_endianness(void)
{
	int x;
	char *end_check;

	x = 1;
	end_check = (char *)&x;

	if (*end_check == 1)
		return (1);
	else
		return (0);
}
