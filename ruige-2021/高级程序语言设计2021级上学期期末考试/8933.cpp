#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n;
    char a[100];
    while(scanf("%s",a)!=EOF)
    {
        n=strlen(a);
        for(i=n-1;i>=0;i--)
            printf("%c",a[i]);
            printf("\n");
    }
    return 0;
}
