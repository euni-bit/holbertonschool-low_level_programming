#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: A pointer to an array of integers.
 * @n: An integer representing the number of elements to be printed.
 */
void print_array(int *a, int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i == n - 1)
			continue;

		printf(",");
	}

	printf("\n");
}
