#include "main.h"

/**
 * print_square - function that prints a square
 * @size: Dimensions of square
 */
void print_square(int size)
{
	int p, r;

	if (size <= 0)
		_putchar('\n');
	for (p = 0; p < size; p++)
	{
		for (r = 0; r < size; r++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
