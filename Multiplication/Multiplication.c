#include <stdio.h>

int main()
{
	for (int x = 1; x <= 9; x++)
	{
		for (int y = 1; y <= 9; y++)
		{
			printf("%d * %d = %d     ", x, y, x * y);
			if (x * y < 10)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}