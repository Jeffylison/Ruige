#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100][100];
    int n,i,max,t[6],j;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
            t[i]=0;
        for(i=0;i<n;i++)
            scanf("%s",a[i]);
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(strcmp(a[i],a[j])==0)
                    t[i]++;
        max=t[0];
        for(i=0;i<n;i++)
            if(max<t[i])
                max=t[i];
        for(i=0;i<n;i++)
        if(t[i]==max)
            {
                printf("%s\n",a[i]);
                break;
            }
    }
    return 0;
}
