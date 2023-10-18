#include "main.h"
#include <stdio.h>
/**
* print_alphabet - prints the alphabet in lowercase, followed by new line
*
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
