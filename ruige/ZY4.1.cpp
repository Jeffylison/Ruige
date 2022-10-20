//ZY4.1
#include<stdio.h>
int main()
{
	int a[20], i;
	a[20] = 0;
	a[0] = 0; a[1] = 0; a[2] = 1;
	printf("%d %d %d ", a[0], a[1], a[2]);
	for (i = 3; i < 20; i++)
	{
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
		printf("%d ", a[i]);
	}
	return 0;
}
