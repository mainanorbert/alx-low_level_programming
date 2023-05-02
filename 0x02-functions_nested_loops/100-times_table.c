#include "main.h"
/**
 * print_times_table - prints table n times times
 * @n: the number to be printed
 */
void print_times_table(int n)
{
	int i = 0, j;
	int prod;
	if (n > 15)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			prod = i * j;
			printf("%3d", prod);
			printf(j != n ? ", " : "");
			j++;
		}
		printf("\n");
		i++;
	}
}

