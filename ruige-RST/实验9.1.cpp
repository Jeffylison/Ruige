#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int ba(char *s)
{
    int i,m;
    for(i=0;s[i]!='\0';i++,m++)
    {
        if(s[i]==' ')
            m=0;
    }
    return m-1;
}
int main()
{
    char a[100];
    gets(a);
    int l=ba(a);
    printf("%d",l);
    return 0;
}
