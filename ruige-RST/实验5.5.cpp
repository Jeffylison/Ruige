#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[30],i,n,t,m;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        t=a[0];
        for(i=0;i<n;i++)
        {
            if(t<a[i])
                t=a[i],m=i;
        }
        printf("%d",m+1);
        t=m=0;
    }
    return 0;
}
