#include <stdio.h>
/**
 * main - the entry point of the program
 *
 * Return: The program returns 0(success)
 */
int main(void)
{
	int i, j, k;

	i = 48;
	j = 48;
	k = 48;
	for (i = 48; i < 58; i++)
	{
		for (j = i + 1; j < 58; j++)
		{
			for (k = j + 1; k < 58; k++)
			{
				if (i > j && j > k)
					continue;
				putchar(i);
				putchar(j);
				putchar(k);
				if (i == 55 && j == 56 && k == 57)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
