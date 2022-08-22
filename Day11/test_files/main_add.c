#include "main.h"
#include <stdio.h>

int main(void)
{
	int x;
	int y;
	int result;

	x = 5;
	y = 3;
	result = add(x, y);
	
	printf("%d + %d = %d", x, y, result);
	return (0);
}
