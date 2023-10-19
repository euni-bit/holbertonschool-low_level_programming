#include <stdio.h>
#include "main.h"
/**
 *print_sign - print the sig of a number
 *
 * Return: 1 if n is greater than zero
 *0 if n is zero
 *-1 if n is less than zero
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
	else
	{
		putchar('-');
		return (-1);
	}
	putchar('\n');
	return (0);
}
