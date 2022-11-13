//SY1.4
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int xyz,x,y,z,sum;
    scanf("%d",&xyz);
    x=xyz/100;
    y=xyz/10%10;
    z=xyz%100%10;
    sum=x*x*x+y*y*y+z*z*z;
    printf("%d",sum);
    return 0;
}
