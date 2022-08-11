#include <stdio.h>

/**
 * main - function entry point.
 * Desccription: display all number of base 16 in lowercase.
 * Return: always (0) as an indicator of success.
 */


int main(void)
{
	char ch = '0';


	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}


	char a_ch = 'a';


	while (a_ch <= 'f')
	{
		putchar(a_ch);
		a_ch++;
	}
	putchar('\n');
	return (0);
}
