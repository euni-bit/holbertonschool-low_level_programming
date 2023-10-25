#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverses a string
 * @s: string to be printed
 */
void rev_string(char *s)
{
	int l = 0;
	int c = 0;
	char tmp;

	while (s[c++])
		l++;

	for (c = l - 1; c >= l / 2; c--)
	{
		tmp = s[c];
		s[c] = s[l - c - 1];
		s[l - c - 1] = tmp;
	}
}
