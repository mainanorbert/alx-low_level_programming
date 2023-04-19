#include "function_pointers.h"
/*#include <stdio.h>*/
/*#include <stdlib.h>*/
/*#include <stddef.h>*/
/**
 * print_name - function that prints name
 * @name: pointer to string
 * @f: pointer to function with pointer character
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
