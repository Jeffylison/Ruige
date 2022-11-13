//SY1.3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int xyz,x,y,z,sum;
    scanf("%d",&xyz);
    x=xyz/100;
    y=xyz/10%10;
    z=xyz%100%10;
    sum=x+y+z;
    printf("%d",sum);
    return 0;
}
