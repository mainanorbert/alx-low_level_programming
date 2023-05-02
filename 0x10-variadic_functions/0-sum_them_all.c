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
	unsigned int sum = 0, i = 0;

	va_start(values, n);

	while (i < n)
	{
		sum += va_arg(values, int);
		i++;
	}
	va_end(values);
	return (sum);
}
