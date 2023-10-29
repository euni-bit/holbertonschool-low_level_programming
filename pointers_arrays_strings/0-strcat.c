#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string to be appended.
 *
 * Return: a pointer to the resulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (originalDest);
}
