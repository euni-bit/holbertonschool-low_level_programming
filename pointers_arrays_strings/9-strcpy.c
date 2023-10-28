#include "main.h"

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
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
