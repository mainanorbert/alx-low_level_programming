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
		mysum1 += a[(x * size) + x];
		mysum2 += a[(x + 1) * size - x - 1];
	}
	printf("%d, %d", mysum1, mysum2);
	printf("\n");
}
