#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to a 2d array
 * @width: number of columns in row
 * @height: number of rows
 * Return: returns an int
 */
int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)	/*loops through rows*/
	{
		arr[i] = malloc(sizeof(int *) * width);
		if (arr[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
