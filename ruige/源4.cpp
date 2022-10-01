#include<stdio.h>
/*int main()
{
	int a, b,c=0,sum = 0;
	scanf_s("%d", &a);
	while (a!= EOF)
	{
		for (b = 2; b <= a; b++)
		{
			for (c = 1; c <= b; c++)
				if (b % c == 0 && (c == 1 || b))
					sum += c - 1;
			
		}
	}
	printf("%d", sum);
	return 0;
}*/
int main()
{
	int a = 0 , b = 0, c,sum=0;
	while (scanf("%d", &c) != EOF)
	{
		sum = 0;
		for (a = 2; a <= c; a++)
		{
			for (b = 2; b <= a; b++)
			{
				if (a % b == 0)
					break;
			}
			if (a == b)
				sum += b;
		}
		printf("%d\n", sum);
	}
	return 0;
}//总算做对了哈哈哈哈哈哈哈（求多组素数之和）