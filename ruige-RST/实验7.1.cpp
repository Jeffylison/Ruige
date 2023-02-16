#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
    char a[30][30],b[30];
    int c[30],n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
                scanf("%s %d",&a[i],&c[i]);
        scanf("%s",&b);
        for(i=0;i<n;i++)
            if(strcmp(a[i],b)==0)
                break;
        printf("%d\n",c[i]);
        n=i=0;
    }
    return 0;
}
