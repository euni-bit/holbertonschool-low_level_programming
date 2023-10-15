#include <stdio.h>
/**
* main`-Entry point
* return: always 0 (success)
*/
int main(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	print("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long int: %zu bytes\n", sizeof(long long int));
	return (0);
}
