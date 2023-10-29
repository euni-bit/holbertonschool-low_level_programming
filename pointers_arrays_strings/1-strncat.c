#include "main.h"
#include <stdio.h>

/**
 * _strncat - Concatenates up to n characters from src to dest.
 * @dest: The destination string.
 * @src: The source string to be appended.
 * @n: The maximum number of characters to concatenate from src.
 *
 * Return: A pointer to the resulting string `dest`.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	*dest = '\0';

	return (originalDest);
}
