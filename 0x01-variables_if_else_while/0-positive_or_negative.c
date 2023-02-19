#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes */


/**
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	/* main function */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive", n);
	}
	else if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n < 0)
	{
		printf("%d is negative", n);
	}
	printf("\n");
	return (0);
}

