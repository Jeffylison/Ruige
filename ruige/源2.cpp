#include<stdio.h>
int main()
{
	int a = 1, b=1,sum=0;
	while (a<102)
	{
		sum = sum + b * a;
		b = -b;
		a += 2;
	}
	printf("%d", sum);
	return 0;
}