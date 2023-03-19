#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: the program returns 0
 */
int main(void)
{
	int i;

	/*printing possible combinations of single digit*/
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		/*if value of i is 9 no comma or space is printed after*/
		if (i != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
