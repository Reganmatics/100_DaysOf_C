#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;
		int k;

		for (j = 0; j <= 9; j++)
		{
			k = i * j;

			if ((k <= 9) && (j < 9))
				if ((k == 0) && (j == 0))
					printf("0");
				else
					printf(",  %d", k);
			else if ((k <= 9) && (j == 9))
				printf(",  %d$\n", k);
			else if ((k > 9) && (j < 9))
				printf(", %d", k);
			else if ((k > 9) && (j == 9))
				printf(", %d$\n", k);
		}
	}
	return (0);
}
