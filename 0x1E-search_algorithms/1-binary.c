#include "search_algos.h"
/**
 * binary_search - searching for value in sorted list
 * @array: pointer to fist element in array
 * @size: number of elements in array
 * @value: This is the value to search
 * Return: index in array where value searched is found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i, mid;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high =  mid - 1;
	}
	return (-1);
}
