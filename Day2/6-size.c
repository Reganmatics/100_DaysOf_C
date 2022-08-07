#include <stdio.h>

/**
 * main- function entry point
 * Description: this dusplays the variable sizes on each machine
 * the size is different for a 64 bit vs 32 bit machine.
 * Return: always (0) as an indicator of success
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes\n", sizeof(float));
	return (0);
}
