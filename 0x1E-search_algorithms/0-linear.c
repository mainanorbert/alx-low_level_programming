# include "search_algos.h"
/**
 * linear_search - searching a value in an array
 * @array: pointer to first elementin array
 * @size: number of elements in array
 * @value: value to search
 * Return: first index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
