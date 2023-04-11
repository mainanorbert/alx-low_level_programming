#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars initializes it with specific char
 *
 * @size: size of array
 * @c: character for initializing
 * Return: returns pointer to array or zero
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
