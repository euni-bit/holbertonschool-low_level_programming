#include "main.h"
/**
 * times_table - Print a function that prints the 9 times table
 */
void times_table(void)
{
	int num;
	int mult;

	for (num = 0; num <= 9; num++)

	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			int prod = num * mult;

			if (mult == 0)
			{
				_putchar('0');
			} else if (prod <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
