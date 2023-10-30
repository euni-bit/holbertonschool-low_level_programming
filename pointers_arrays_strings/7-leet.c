#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	char *leetspeak = "aAeEoOtTlL";
	char *leetcode = "4433007711";

	int i;
	int j;

	for (i = 0; str[i]; i++)
	{
		for (j = 0; leetspeak[j]; j++)
		{
			if (str[i] == leetspeak[j])
			{
				str[i] = leetcode[j];
				break;
			}
		}
	}

	return (str);
}
