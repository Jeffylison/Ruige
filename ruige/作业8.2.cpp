//ZY8.2
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[100];
    int i,j,n,t,m;
    while(gets(a)!=NULL)
    {
        t=0;
        for(i=0;a[i]!='\0'; i++)
        {
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
                if(!(a[i+1]>='a'&&a[i+1]<='z')&&!(a[i+1]>='A'&&a[i+1]<='Z'))
                    t++;
        }
        printf("%d\n",t);
        for(i=0;a[i]!='\0'; i++)
        {
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
                if(!(a[i+1]>='a'&&a[i+1]<='z')&&!(a[i+1]>='A'&&a[i+1]<='Z'))
                {
                    for(j=i; j>=0; j--)
                    {
                        if(a[j]==' ') break;
                        printf("%c",a[j]);
                    }
                    printf(" ");
                }
        }
        printf("\n");
    }
    return 0;
}
