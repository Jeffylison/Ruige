//SY9.2
#include <stdio.h>
void Strcat(const char* a, const char* b)
{
	printf("%s%s", a, b);
}
int main()
{
	char str1[100];
	char str2[100];

	gets(str1);
	gets(str2);
	Strcat(str1, str2);
	return 0;
}
