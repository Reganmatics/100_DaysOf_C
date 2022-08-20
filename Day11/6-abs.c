#include <stdio.h>

/**
 * _abs - compute absolute value
 * @int: variable
 * Return: (-n) if n < 0, else (n) if n >= 0
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
