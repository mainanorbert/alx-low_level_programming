#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to make change
 * @argc: number of arguments
 * @argv: pointers to arrays of strings
 * Return: returns int
 */
int main(int argc, char *argv[])
{
	int c, no_of_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);

	if (c < 0)
	{
		printf("%d\n", 0);
	}
	while (c > 0)
	{
		if (c >= 25)
		{
			c = c - 25;
		}
		else if (c >= 10)
		{
			c = c - 10;
		}
		else if (c >= 5)
		{
			c = c - 5;
		}
		else if (c >= 2)
		{
			c = c - 2;
		}
		else
		{
			c = c - 1;
		}
		no_of_coins++;
	}
	printf("%d\n", no_of_coins);
	return (0);
}
