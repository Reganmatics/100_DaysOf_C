#include <stdio.h>
#include "main.h"


/**
 * print_alphabet_x10 - print a..z 10 times
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
	char c = 'a';


	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	}
}
