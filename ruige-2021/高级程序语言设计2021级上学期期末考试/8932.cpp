#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[100],b[100],i,n;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            b[i]=a[i];
        }
        b[0]=(a[1]+a[0])/2;
        b[n-1]=(a[n-2]+a[n-1])/2;
        for(i=1;i<n-1;i++)
            b[i]=(a[i-1]+a[i]+a[i+1])/3;
        for(i=0;i<n;i++)
            printf("%d ",b[i]);
        printf("\n");
    }
    return 0;
}
