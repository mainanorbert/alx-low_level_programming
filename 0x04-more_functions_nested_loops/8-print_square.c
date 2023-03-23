#include "main.h"
/**
 * print_square - prints square of a number
 * @size: size of the square
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)	/*Prints first ron n times*/
		{
			for (y = 0; y < size; y++)	/*prints columns n times*/
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
				}
}
