//SY5.2
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x[20], y[20];
	int a, b, c, i;
	while (scanf("%d%d%d", &a, &b, &c) != EOF)
	{
		for (i = 0; i < a; i++)
		{
			scanf("%d", &x[i]);
		}
		for (i = 0; i < a; i++)
		{
			if (x[i] >= b && x[i] <= c)
			{
				y[i] = x[i];
				printf("%d ", y[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
