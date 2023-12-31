#include "main.h"
#include <stdio.h>
/**
 * puts2 -  prints every other character of a string
 * @str: the string containing character
 */
void puts2(char *str)
{
	int index = 0;
	int len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
