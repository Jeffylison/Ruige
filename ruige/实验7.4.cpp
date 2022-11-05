//SY7.4
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[100],t[100];
    int i=0,j=0,n=0,m=0,x=0;
    while(scanf("%s%s",a,t)!=EOF)
    {
        i=j=n=m=x=0;
        m=strlen(t);
        for(i; a[i]!='\0'; i++)
        {
            for(j; t[j]!='\0'; j++)
            {
                if(a[i]==t[j])
                {
                    j++;
                    n++;
                    break;
                }
                else
                {
                    j=0;
                    n=0;
                    break;
                }
            }
            if(n==m){
                printf("%d ",i-m+2);
                n=0;j=0;x++;
                }
        }
        if(x==0) printf("-1");
        printf("\n");
    }
    return 0;
}
