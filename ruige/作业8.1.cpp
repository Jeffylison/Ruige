//ZY8.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,n,j,b[100];
    char a[100][100];
    while(scanf("%d\n",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            b[i]=1;
            gets(a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
                if(strcmp(a[i],a[j])==0)
                    b[i]++;
            for(j=i-1; j>=0; j--)
                if(strcmp(a[j],a[i])==0)
                    break;
            if(strcmp(a[j],a[i])==0)
                continue;
            //printf("%s\n",a[i]);
            printf("%d ",b[i]);
            printf("%s\n",a[i]);

        }
    }
    return 0;
}
