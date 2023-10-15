#include <stdio.h>
/**
* main`-Entry point
* return: always 0 (success)
*/
int main(void) 
{
	int intType;
	float floatType;
	double doubleType;
	char charType;

	// sizeof evaluates the size of a variable
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of double: %zu bytes\n", sizeof(doubleType));
	print("Size of char: %zu bytes\n", sizeof(charType));

	return (0);
}
