#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: minum number
 * @max:maximum number
 * Return: ponter to the allocates memory
 */
int *array_range(int min, int max)
{
	int i, j = 0, *arr, len = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	arr = (int *) malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}
