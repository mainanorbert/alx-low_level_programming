#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 (success)
 */
int main(void)
{
	int i;
	int j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			putchar(j);
			putchar(i);
			if (i == '9' && j == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}
