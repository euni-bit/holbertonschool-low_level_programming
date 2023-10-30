#include "main.h"

/**
 * cap_string - capitalizes all words of a strings
 * @s: the string
 *
 * Return: a pointer to change
 */
char *cap_string(char *s)
{
	int count = 0;
	char sep_words[] = " \t\n,;.!?\"(){}";

	while (s[count])
	{
		if (s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}
		count++;

		for (int i = 0; i < 13; i++)
		{

			if (s[count] == sep_words[i])
			{
				if (s[count + 1] >= 'a' && s[count + 1] <= 'z')
				{
					s[count + 1] = s[count + 1] - 32;
				}
				break;
			}
		}
		count++;
	}
	return (s);
}
