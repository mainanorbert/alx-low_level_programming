#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: Program returns zero
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = "A";
	while (letter < "Z")
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}
