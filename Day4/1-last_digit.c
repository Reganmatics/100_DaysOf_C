#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function entry point
 * Description: variable of interest -(n),
 * displays `last digit` of followed by, (n), followed by `is` followed by
 * 1. `and is greateer than 5`
 * 2. `and is 0`
 * 3. `and is less than 6 an dnot 0`
 * followed by a new line.
 * Return: always (0) as an indicator of success.
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	printf("Last digit of %d is %d", n, lastDigit);
	if (lastDigit > 5)
	{
		printf(" and is greater than 5\n");
	} else if (lastDigit == 0)
	{
		printf(" and is 0\n");
	} else if (lastDigit < 6 && lastDigit != 0)
	{
		printf(" and is less than 6 and is not 0\n");
	}
	return (0);
}
