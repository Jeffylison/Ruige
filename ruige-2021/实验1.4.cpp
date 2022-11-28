#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    char a[80];
    gets(a);
    scanf("%d",&n);
    for(i=0;a[i]!='\0';i++)
    {
        if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
        {
            a[i]+=n;
            if(!((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')))
                a[i]-=26;
        }
        else continue;
    }
    printf("Encrypted message: ");
    printf("%s",a);
    return 0;
}
