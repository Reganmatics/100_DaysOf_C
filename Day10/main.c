#include <stdio.h>
#include "main.h"


/**
 * main - function entry point.
 * Description: this tests the functions.c functions.
 * Return: always (0) as an indicator of success.
 */


int main(void)
{
	int n = 5;
	int result = factorial(n);

	int l = 5;
	int w = 4;
	int result2 = area(l, w);


	printf("%d! = %d\n", n, factorial(n));
	printf("the area of rectangle(length:%d, width:%d) = %d\n", l, w, result2);
	return (0);
}
