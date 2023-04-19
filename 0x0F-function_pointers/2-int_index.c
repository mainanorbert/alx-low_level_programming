#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: pointer to array
 * @size: size of the array
 * @cmp: pointer to function to be used
 *
 * Return: returns an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
