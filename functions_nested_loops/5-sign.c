#include <stdio.h>
#include "main.h"
/**
 *print_sign - print the sig of a number
 *
 * Return: 1 or 0
 * @n: The sign to be printed
 */
int print_sign(int n)
{
	if  (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	putchar('\n');
	return (0);
}
