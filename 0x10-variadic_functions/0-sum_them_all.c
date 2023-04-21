#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns sum of integers
 * @n: number of parameters
 * Return: returns sum;
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list values;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(values, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(values, const unsigned int);
	}
	va_end(values);
	return (sum);
}

