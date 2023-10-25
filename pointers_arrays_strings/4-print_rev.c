#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0, counter;

	while (s[counter++])
	{
		len++;
	}
	for (counter = len - 1; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	{
		_putchar('\n');
	}
}
