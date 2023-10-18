#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check for alphabetic character
 *
 * Return: i if c is a letter return 0 otherwise
 *
 * @c: The character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
