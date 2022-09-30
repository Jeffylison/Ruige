#include<stdio.h>
int main()
{
	int a, b, sum = 0;
	while (scanf_s("%d", &a) != EOF)
	{
		for (b = 0; b <= a; b++)
			if (a % b == 0)
			{
				printf("%d", b);
				printf("%d", sum += b);
			}
	}
	return 0;
}//¼±ËÀÎÒÁË 
