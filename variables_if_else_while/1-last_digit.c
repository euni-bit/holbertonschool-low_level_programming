#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main- Print last digit
* Return: Always return 0
*/
int main(void)
{
	int n;
	int e = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (e > 5)
{
	printf("Last digit of %d is %e and is greater than 5\n", n);
}
	if (e == 0)
{
	printf("Last digit of %d is %e and is 0\n", n);
}
	if (e < 6, e > 0)
{
	printf("Last digit of %d is %e and is less than 6 and not 0\n", n);
}
	return (0);
}
