#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main- Prints whether is positive or positive
* Return: Always return 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
	printf("%i is positive\n");
}
	else if (n == 0)
{
	printf("%i is zero\n");
}
	else
{
	printf("%i is negative\n");
}
	return (0);
}
