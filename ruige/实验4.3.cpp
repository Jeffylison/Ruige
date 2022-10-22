//SY4.3
#include<stdio.h>
#include<math.h>
int main()
{
	int n, sum;
	n = 0;
	for (sum = 1; sum <= 2000; sum =sum+pow(2,n))
	{
			n++;
	}
	printf("%d", sum);
	return 0;
}