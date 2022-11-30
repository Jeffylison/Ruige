#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int p[100],t=0,i,n,j,m=0,a,b,min;
    while(scanf("%d%d%d",&n,&a,&b)!=EOF)
    {
        t=0;
        for(i=0;i<n;i++)
            scanf("%d",&p[i]);
        for(i=0;i<n;i++)
            if(p[i]>=a&&p[i]<=b)//7 10 20  1 25 30 12 15 20 60
                {t=1;m=i;break;}//5 5 10   17 2 3 4 15
        if(t==0)
        {
            min=p[0];
            for(i=0;i<n;i++)
                if(min>p[i])
                    min=p[i];
        }
        else
        {
            min=p[m];
            for(i=0;i<n;i++)
                if(p[i]>=a&&p[i]<=b)
                    if(min>p[i])
                        min=p[i];
        }
        printf("%d\n",min);
    }
    return 0;
}
