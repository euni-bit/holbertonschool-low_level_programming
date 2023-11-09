#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the string to be concatenated upon
 * @s2: the string to be concatenaded to s1
 *
 * Return: if concatenation fails - NULL.
 *	  Otherwise - a pointer the newly-allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int index, concat_index = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = " ";

	if (s2 == NULL)
		s2 = " ";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (index = 0; s1[index] != '\0'; index++)
		concat_str[concat_index++] = s1[index];

	for (index = 0; s2[index] != '\0'; index++)
		concat_str[concat_index++] = s2[index];

	concat_str[concat_index] = '\0';

	return (concat_str);
}
