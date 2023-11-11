#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to con.
 *
 * Return: A pointer to the newly allocated concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int len1, len2, result_len, i, j;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		result_len = len1 + len2;
	else
		result_len = len1 + n;

	result = malloc(result_len + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++, i++)
		result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
