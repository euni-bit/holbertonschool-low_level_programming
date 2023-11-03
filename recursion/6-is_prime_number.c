#include "main.h"
#include <stdio.h>
/**
 * is_prime_recursive - helper function to check for prime using recursion.
 * @n: the interger to be checked
 * @divisor: the current divisor to test
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, divisor + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number.
 * @n: the integer to be checked.
 *
 * Return: 1 if n is a prime umber, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}
