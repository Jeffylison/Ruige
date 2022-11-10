//SY9.2
#include <stdio.h>
void Strcat(const char* a, const char* b)
{
    char *p;
	for(p=a;*p!='\0'&&*p!='\r';p++)
        printf("%c",*p);
    for(p=b;*p!='\0'&&*p!='\r';p++)
        printf("%c",*p);
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
