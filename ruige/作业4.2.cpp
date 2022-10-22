//ZY4.2
#include<stdio.h>
int main()
{
	int a,b,n, s;
	s = 0;
	scanf("%d", &n);
	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
			s += b;
	}
	printf("%d", s);
	return 0;
}