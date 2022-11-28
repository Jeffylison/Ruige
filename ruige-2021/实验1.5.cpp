#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i,m,n=0,j=0;
    char a[100];
    gets(a);
    m=strlen(a);
    n=m-1;
    //printf("%d ",n);
    for(i=n;i>=0;i--)
        //printf("%c",a[i]);
    {
        if(a[i]==' ')
            printf("%c",a[i]);
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
            if(a[i-1]==' '||i==0)
            {
                //printf("%d %d ",j,n);
                for(j=i;j<n;j++)
                    printf("%c",a[j]);
                n=i-1;
            }
    }
    printf("%c",a[m-1]);
    return 0;
}
