#include <stdio.h>

/**
 * main - function entry point
 * Description: displays {a..z} except `q` and `e`
 * Return: always (0) as an indicator of success
 * Author: Reganmatics
 */


int main(void)
{
	char ch = 'a';


	while  (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
