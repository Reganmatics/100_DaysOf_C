#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Function entry point
 * Description: variable of interest - (n), displays `n` followed by:
 * 1. `is positive` if n > 0,
 * 2. `is zero` if n == 0,
 * 3. `is negative` if n < 0.
 * followed by a new line
 * Return: always (0) as an indicator of success
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}
