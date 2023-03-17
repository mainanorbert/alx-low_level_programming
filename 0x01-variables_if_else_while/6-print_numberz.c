#include <stdio.h>

/**
 * main - the entry point of a function
 * Return: returns a 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '1');
	}
	putchar('\n');
	return (0);
}
