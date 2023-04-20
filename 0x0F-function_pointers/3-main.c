#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point for the function
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num1, num2, soln;
	char *my_op;
	int (*myfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	my_op = argv[2];
	if (get_op_func(my_op) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*my_op == '/') || (*my_op == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	myfunc = get_op_func(my_op);	/*returns correct function for the operation*/
	soln = myfunc(num1, num2);
	printf("%d\n", soln);
	return (0);
}
