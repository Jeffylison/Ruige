#include<stdio.h>
int main()
{
	int a, b;
	char c;
	a = 0;
	c = getchar();
	while (1)
	{
		if (c == '\n' || c == '\r' || c == EOF)break;
		if (c == 7)
			++a;
		c = getchar();
	}
	if (a == 3)
		printf("good luck!\n");
	else printf("%d\n", a);
	return 0;
}