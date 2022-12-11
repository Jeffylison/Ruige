#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[100],i,n,m,*p=a;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++,p++)
            if(*p>=m)
            printf("%d ",*p);
        printf("\n");
    }
    return 0;
}
