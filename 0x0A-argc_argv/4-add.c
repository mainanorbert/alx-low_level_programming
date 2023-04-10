#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive integers
 * @argc: number of arguments
 * @argv: array of pointers containing strings
 * Return: returns an int
 */
int main(int argc, char *argv[])
{
	int i, j = 0, sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
