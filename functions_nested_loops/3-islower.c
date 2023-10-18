#include "main.h"
#include <stdio.h>
/**
 * _islower - check for lowercase character
 *
 * Return: 1 if c lower case, return 0 otherwise
 *
 * @c: The caracter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
