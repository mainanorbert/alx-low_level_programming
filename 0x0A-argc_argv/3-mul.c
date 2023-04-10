#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints product of two numbers
 * @argc: number of arguments
 * @argv: array of pointers to string
 */
int main(int argc, char *argv[])
{
	int i, count = 0;
	int prod;
	
	for (i = 1; i < argc; i++)
	{
		count++;
	}
	if (count == 2)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
