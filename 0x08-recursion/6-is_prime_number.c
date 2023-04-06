#include "main.h"
int prime_func(int n, int x);

/**
 * is_prime_number - checks if n is prime
 * @n: the number to be checked
 * Return: returns 0 or 1
 */
int is_prime_number(int n)
{
	int x = 2;

	if (n <= 0 || n == 1)
	{
		return (0);
	}
	return (prime_func(n, x + 1));
}
/**
 * prime_func - checks prime number
 * @n: integer number
 * @x: variable used to check
 * Return: returns an integer
 */

int prime_func(int n, int x)
{
	if (n == x)
	{
		return (1);
	}
	if (n % x != 0)
	{
		return (prime_func(n, x + 1));
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (0);
}
