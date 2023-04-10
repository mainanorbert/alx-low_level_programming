#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: number of arguments
 * @argv: array of pointers to string
 * Return: returns 0 and 1 for success anf failure respec.
 */
int main(int argc, char **argv)
{
	int prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	prod = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", prod);
	return (0);
}
