#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[20],n,i,m,j;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=1; i<=n; i++)
            scanf("%d",&a[i]);
        for(i=1; i<=n; i++)
        {
            if(a[i]<m)//5 4  3  2 1
            {
                for(j=n+1;j>i;j--)
                    a[j]=a[j-1];
                a[i]=m;
                break;
            }
        }
        for(i=1; i<=n+1; i++)
            printf("%d ",a[i]);
        i=j=0;
    }
    return 0;
}
