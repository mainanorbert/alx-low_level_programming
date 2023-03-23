#include <stdio.h>
/**
 * main - its where the program starts
 */
int main()
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if ((x % 3)== 0)
		{
			printf("Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}
		else if(x %5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d",x);
		}
		printf(" ");
	}
	printf("\n");
	return (0);
}
