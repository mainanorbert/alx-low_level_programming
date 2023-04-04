#include <stdio.h>
/**
 * print_diagsums - prints sum two of diagonals in square matrix
 * @a: the matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int mysum1 = 0, mysum2 = 0, x;

	for (x = 0; x < size; x++)
	{
		mysum1 += a[x * size + 1];
		mysum2 += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", mysum1, mysum2);
}
