#include <stdio.h>

/**
 * fact - function to compute facyorial of n!
 * Description: function uses recursion
 * @n: variable of type int
 * Return: n*(n-1)*(n-2)*(n-2)*...*3*2*1
 */


/**
 * main - function entry point
 * Description: computes the factorial of the number specified
 * Return: awlays (0);
 */


int fact(int n)
{
	if (n <= 1)
		return (1);
	else if (n > 1)
	{
		return (n * fact(n - 1));
	}
}


int main(void)
{
	int n = 6;
	int result = fact(n);


	printf("%d! = %d\n", n, result);
	return (0);
}
