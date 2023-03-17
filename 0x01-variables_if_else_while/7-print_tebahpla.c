#include <stdio.h>

/**
 * main - entery point of the program
 *
 * Return: The program returns 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
