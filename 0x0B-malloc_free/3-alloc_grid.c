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

	arr = (int **) malloc(sizeof(int *) * height);	/*allocates memory to array*/

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)	/*loops through rows*/
	{
		arr[i] = (int *) malloc(sizeof(int *) * width);	/*al. mem. to row elmts.*/
		if (arr[i] == NULL)	/*checks if memory is not alloacted*/
		{
			for (j = 0; j < i; j++)	/*loops to free previously allocated rows*/
			{
				free(arr[j]);
			}
			free(arr);	/*frees all memory previously allocated*/
			return (NULL);
		}
		for (j = 0; j < width; j++)	/*initialized rows to 0*/
		{
			arr[i][j] = 0;
		}
	}
		return (arr);
	}
