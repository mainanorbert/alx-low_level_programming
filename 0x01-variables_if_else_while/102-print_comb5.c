#include <stdio.h>

/**
 * main - the entry point of a function
 *
 * Return: The program returns 0 (success)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			putchar(i);
			putchar(j);
			if (i == 57 && j == 57)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
