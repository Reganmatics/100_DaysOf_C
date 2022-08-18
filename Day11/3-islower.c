#include <stdio.h>
#include "main.h"

/**
 * _islower - check if c is lowercase
 * @c: character to check
 * Return: (1) if _islower == True
 * (0) if _islower(c) == False
 */

int _islower(int c)
{
	if (c>= 'a' && c <= 'z')
		return (1);
	return (0);
}
