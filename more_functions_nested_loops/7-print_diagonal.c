#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Amount of \ to be printed
 */
void print_diagonal(int n)
{
	int p, r;

	if (n <= 0)
		_putchar('\n');
	else
		for (r = 0; n > 0; n--, r++)
		{
			for (p = 0; p < r; p++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}
