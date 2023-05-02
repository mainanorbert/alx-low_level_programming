#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of integers
 * @n: number of parameters
 * Return: returns sum;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vals;
	unsigned int sum = 0, i = 0;

	va_start(vals, n);
	/*if (n == 0)*/
		/*return (0);*/

	while (i < n)
	{
		sum += va_arg(vals, int);
		i++;
	}
	va_end(vals);
	return (sum);
}
