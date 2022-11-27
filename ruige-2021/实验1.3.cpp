#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int size(char a[])
{
    int i,m=1;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]!=a[i+1]){printf("%d ",m);m=1;}
        else m++;
    }
    printf("\n");
    return 0;
}
int main()
{
    int i,m;
    char a[100],b[100];
    while(scanf("%s",a)!=EOF)
    {
        size(a);
    }
    return 0;
}
