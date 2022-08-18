#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: variable to check for alphabetic character.
 * Return: (1) if _isalpha(c) == True
 * (0) if _isalpha(c) == False
 */


int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
