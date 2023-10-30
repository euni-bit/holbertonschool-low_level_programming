#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *s)
{
	int index = 0;
	int capitalize_next = 1;

	while (s[index])
	{
		if ((s[index] >= 'a' && s[index] <= 'z') && capitalize_next)
		{
			s[index] -= 32;
			capitalize_next = 0;
		}
		else if (s[index] == ' ' || s[index] == '\t' ||
		 s[index] == '\n' || s[index] == ',' ||
		 s[index] == ';' || s[index] == '.' ||
		 s[index] == '!' || s[index] == '?' ||
		 s[index] == '"' || s[index] == '(' || s[index] == ')' ||
		 s[index] == '{' || s[index] == '}')
		{
			capitalize_next = 1;
		}
		index++;
	}

	return (s);
}

