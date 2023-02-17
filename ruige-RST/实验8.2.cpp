#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int ba(n)
{
    int i;
    for(i=1;; i++)
    {
        if(n/10==0)
            break;
        else n/=10;
    }
    return i;
}
int main()
{
    int n,m;
    scanf("%d",&n);
    m=ba(n);
    printf("%d",m);
    return 0;
}
