#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[5][5],i,j,n,t=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(a[i][j]==0)
                    t++;
        if(t==n*n/2-n/2) printf("Yes");
        else printf("No");
        t=0;
    }
    return 0;
}
