#include<stdio.h>
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
}//���������˹������������������������֮�ͣ�