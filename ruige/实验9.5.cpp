//SY9.5
#include <stdio.h>
int sort(int** p, int n)
{
	int temp;
	int i, j;
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (*p[j] > *p[j + 1])
				temp = *p[j], * p[j] = *p[j + 1], * p[j + 1] = temp;
	return 0;
}
int main()
{
	int i, n, digit[20], ** p, * pstr[20];
	scanf("%d", &n);
	for (i = 0; i < n; i++)
		pstr[i] = &digit[i];
	for (i = 0; i < n; i++)
		scanf("%d", pstr[i]);
	p = pstr;
	sort(p, n);
	for (i = 0; i < n; i++)
		printf("%d ", *pstr[i]);
	printf("\n");
	return 0;
}
