#include "main.h"
#include <stdio.h>

/**
 * times_table - 9x9 table
 * Description: display a 9x9 times table
 * Return: 9 times table
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			if ((0 < i) && (i <= 8))
			{
				_putchar(i * j);
				_putchar(',');
				_putchar(' ');
			}
			if (i == 9)
			{
				_putchar(i * j);
				_putchar('$');
				_putchar('\n');
			}
		}
	}
}
