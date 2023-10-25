#include "main.h"
#include <stdio.h>
/**
 * swap_int - swaps the values of two integers
 *
 * @a: first interger to be swapped
 * @b: second interger to be swapped
 */
void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
