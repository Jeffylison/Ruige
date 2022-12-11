#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],b[100];
    int i,j,t,n;
    while(gets(a)!=EOF)
    {
        n=0;
        t=strlen(a);
        for(i=0; a[i]!='\0'; i++)
        {
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
            {
                printf("%c",a[i]);
                n=1;
            }
            else if(i==t) break;
            else if(n==0) continue;
            else
            {
                if((a[i+1]>='a'&&a[i+1]<='z')||(a[i+1]>='A'&&a[i+1]<='Z'))
                    printf("\n");
            }
        }
    }
    return 0;
}
