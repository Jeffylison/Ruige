#include<stdio.h>
int main()
{
	int b=0,i,m=0,n=0;
	for (i = 0; i<100; i++)
	{
		m = i % 10;
		n = i / 10;
	if (m == 6 || n == 6)
		b = b + i;
	}
	printf("%d", b);
	return 0;
}