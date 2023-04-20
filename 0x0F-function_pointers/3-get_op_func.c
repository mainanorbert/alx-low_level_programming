#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - pointer to function with pointer character
 * @s: pointer to operator passed
 * Return: returns an integer
 */
int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};

	while (ops[i].op)
	{
		if (ops[i].op == s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
