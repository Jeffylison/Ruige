#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[10];
    int i,n;
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
        if(a[i]>='A'&&a[i]<='Z')
            a[i]=a[i]-'A'+'a';
    puts(a);
    return 0;
}
