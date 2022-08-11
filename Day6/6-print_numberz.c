#include <stdio.h>

/**
 * main - function entry point.
 * Description: display {0..9} using only `putchar` twice
 * Return: always (0)
 * AUTHOR: Reganmatics
 */


int main(void)
{
	int i = '0';


	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
