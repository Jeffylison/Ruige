//ZY8.2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100];
    int i,j,n,t,m;
    while(gets(a)!=EOF)
    {
        t=0;m=0;
        n=strlen(a);
        for(i=0;i<n;i++)
        {
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
               if(!(a[i+1]>='a'&&a[i+1]<='z')&&!(a[i+1]>='A'&&a[i+1]<='Z'))
                t++;
        }
        printf("%d\n",t);
        for(i=0;i<n;i++)
        {
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
               if(!(a[i+1]>='a'&&a[i+1]<='z')&&!(a[i+1]>='A'&&a[i+1]<='Z'))
               {for(j=i;j>=m;j--)
                    printf("%c",a[j]);
                    printf(" ");
                    m=i+2;}
        }
        //printf("\n");
    }
    return 0;
}
