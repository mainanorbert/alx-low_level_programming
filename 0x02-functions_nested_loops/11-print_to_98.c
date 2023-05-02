#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 *
 * @n: the value that is entered
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			printf(n != 98 ? ", " : "");
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			printf(n != 98 ? ", " : "");
			n--;
		}
		printf("\n");
	}
}
