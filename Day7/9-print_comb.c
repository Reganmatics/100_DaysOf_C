#include <stdio.h>

/**
 * main - function entry point
 * Description: display all possible combinations of single-digit numbers
 * Return: always (0) as an indicator of success
 */


int main(void)
{
	char ch = '0';


	while (ch <= '9')
	{
		if (ch != '9')
		{
			putchar(ch);
			putchar(',');
			putchar(' ');
		}
		else if (ch == '9')
		{
			putchar('9');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
