#include "search_algos.h"
/**
 * binary_search - searching for value in sorted list
 * @array: pointer to fist element in array
 * @size: number of elements in array
 * @value: This is the value to search
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)
		return (-1);
	while (low <= high)
	{
		mid = (low + mid) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high =  mid - 1;
	}
	return (-1);
}
			
