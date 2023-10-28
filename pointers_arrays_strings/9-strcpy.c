#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 *	including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: a buffer to copy the string to
 * @src: source string to copy.
 *
 * Return: a pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *originalDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (originalDest);
}
