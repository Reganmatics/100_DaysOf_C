#include <stdio.h>


int main(void)
{
	if (('Z' < 'a') && ('Z' < 'a'))
	{
		printf("upper case are  lesser than 'a'");
	}
	if (('A' > 'a') && ('Z' > 'a'))
	{
		printf("A is greater than a");
	}
	if ('A' < 'Z')
	{
		printf("A < Z");
	}else if ('A' > 'Z')
	{
		printf("A > Z");
	}
	return (0);
}
