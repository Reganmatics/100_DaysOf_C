#include <stdio.h>

/**
 * main - function entry point
 * Description: displays the lowercase alphabets {a..z}
 * using only two `putchar` functions
 * Return: always (0) as an indicator of success
 */


int main(void)
{
	char ch = 'a';
	char z_ch = 'z';


	while (ch != z_ch)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
