#include "main.h"

/**
 * reverse_array - reverse elements of an array
 * @a: array
 * @n: number of elements in array
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	/* iterates first half of the loop*/
	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];	/* tmp stores 1st element i.e., a[0]*/
		a[i] = a[j];	/* swaps a[0] with a[n-1], if n is odd middle not swapped*/
		a[j] = tmp;	/*since tmp(a[0]) is assigned to a[n-1]*/
	}
}
