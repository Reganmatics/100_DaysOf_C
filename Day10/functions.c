#include <stdio.h>

/**
 * factorial - entry point for factorial function.
 * @n: variable of type int.
 * Description: this implememnts the recursive multiplication of n & (n - 1).
 * Return: This returns n*(n-1)*(n-2)*...*3*2*1.
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	else if (n > 1)
	{
		return (n * factorial(n - 1));
	}
}


/**
 * area - entry point for area function.
 * @length: variable of type int
 * @width: variable of type int
 * Description: This implements the area function.
 * Return: area  = length * width.
 */

int area(int length, int width)
{
	return (length * width);
}
