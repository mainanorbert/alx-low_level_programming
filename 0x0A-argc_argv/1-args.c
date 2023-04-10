#include <stdio.h>

/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of pointers to strings (arguments)
 * Return: returns 0 for success
 */
int main(int argc, char **argv)
{
	(void) argv;	/*suppresses compiler warnings*/
	printf("%d\n", argc);
	return (0);
}
