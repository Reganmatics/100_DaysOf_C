#include <stdio.h>
#include "main.h"

/**
 * print_sign - print sign of number
 * @n: number to print sign
 * Return: (1) if n > 0
 * (0) if n == 0
 * (-1) if n < 0
 */


int print_sign(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (1);
	return (0);
}
