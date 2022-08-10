#include <stdio.h>

/**
 * main - function entry point
 * Description: displays {a..z}{A..Z}
 * Return: always (0)
 */

int main(void)
{
	char ch = 'a';
	char Uch = 'A';


	while (ch != 'z')
	{
		putchar(ch);
		ch++;
	}

	while (Uch != 'Z')
	{
		putchar(Uch);
		Uch++;
	}
	putchar('\n');
	return (0);
}
