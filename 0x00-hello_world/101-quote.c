#include <unistd.h>

/**
 * main - entry point of the program
 *
 * Return: The program returns 0 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}

