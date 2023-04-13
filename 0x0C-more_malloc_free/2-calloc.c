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
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	p = (char *)arr;
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	/*memset(arr, 0, nmemb * size);*/
	return (arr);
}
