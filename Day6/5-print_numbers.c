#include <stdio.h>

/**
 * main - function entry point.
 * Description: displays all single digits of base 10 {0..9}.
 * Return: always (0) as an indicator of success.
 */


int main(void)
{
	int i = 0;


	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
