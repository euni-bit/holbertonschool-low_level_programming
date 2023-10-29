#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters to uppercase in a string.
 * @str: The string to be converted.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *originalStr = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - 'a' + 'A';
		}
		str++;
	}

	return (originalStr);
}
