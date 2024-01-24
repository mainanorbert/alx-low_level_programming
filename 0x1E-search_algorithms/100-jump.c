#include "search_algos.h"
#include <math.h>
/**
 * jump_search - search value in sorted array
 * @array: pointer to first element in array
 * @size: size of array
 * @value: The value to search in an array
 * Return: first index where value is located or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump, prev, next, i;

	if (array == NULL)
		return -1;
	jump = (size_t)sqrt(size);
	printf("Jump is: %ld\n", jump);
	prev = 0;

    while (array[prev] < value)
    {
	    next = prev + jump;
	    printf("Comparing %d with %d\n", array[next - 1], value);
	    if (next >= size)
	    {
		    next = size;
		    for (i = prev; i < next; i++)
		    {
			    printf("Comparing %d with %d\n", array[i], value);
			    if (array[i] == value)
				    return i;
		    }
		    return -1;
	    }
	    if (array[next] >= value)
	    {
		    for (i = prev; i <= next; i++)
		    {
			    printf("Comparing %d with %d\n", array[i], value);
			    if (array[i] == value)
			    {
				    return i;
			    }
		    }
		    return -1;
	    }
	    prev = next;
    }
    return -1;
}
