#include<stdio.h>
int main()
{
	int a, b;
	for (a = 1; a <= 9; a++)//9��
	{
		for (b = 0; b < 9 - a; b++)
			printf(" ");//ÿ��ǰ�ո�
		for (b = 0; b < a; b++)
			printf("%d ", 1 + b);
		printf("\n");
	}
	return 0;
}