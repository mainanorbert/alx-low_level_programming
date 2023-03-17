#include <stdio.h>

/**
 * main - the program starts here
 *
 * Return: The program return 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' || letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
