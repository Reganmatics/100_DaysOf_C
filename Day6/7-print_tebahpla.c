#include <stdio.h>

/**
 * main - function entry point.
 * Description: display lower case alphabet in reverse.
 * Return: always (0) as an indicator of success.
 */


int main(void)
{
	char ch = 'z';


	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
