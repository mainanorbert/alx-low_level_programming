#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - pointer to function with pointer character
 * @s: pointer to operator passed
 * Return: returns an integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"%", op_mod},
		{"/", op_div},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
