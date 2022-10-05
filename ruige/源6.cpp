#include<stdio.h>
int main()
{
	int i,n,m;
	float sum, x = 1, y = 2;
	sum = 0;
	sum += y / x;
	for (i = 2; i <= 20; i++)
		m=x,n=y,x = y, y = m + n , sum += y / x;
	printf("sum=%.2lf", sum);
	return 0;
		
}