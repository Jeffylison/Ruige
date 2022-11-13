//ZY2.2
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char a;
    while(scanf("%c",&a)!=EOF)
    {
    if(a>='a'&&a<='w')
    a=a+3;
    else if(a>'w'&&a<='z')
    a=a-23;
    else a=a;
    printf("%c",a);
    }
    return 0;
}

