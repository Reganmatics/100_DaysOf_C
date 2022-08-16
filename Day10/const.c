#include <stdio.h>


/**
 * main - function entry point
 * Description: this is a test of constants
 * Return: always (0) as an indicator of success
 */


int main(void)
{
	const int len = 11;
	const int wid = 5;
	int area = len * wid;


	printf("Area of rectangle(len:%d, wid:%d) = %d\n", len, wid, area);
	return (0);
}
