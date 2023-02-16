#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,j,sum=0,n=1;
    for(i=1;i<=101;i+=2)
    {
        sum=sum+i*n;
        n=-n;
    }
    printf("%d",sum);
    return 0;
}
