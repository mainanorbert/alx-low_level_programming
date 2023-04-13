#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - assigns memory for array
 * @nmemb: number of elements
 * @size: of each element
 * Return: returns pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	/*unsigned int i;*/

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}
