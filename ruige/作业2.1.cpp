//ZY2.1
#include<stdio.h>
#include<stdlib.h>
int main()
{
    double a,b,c,t;
    scanf(" %lf %lf %lf",&a,&b,&c);
    if(a<b)
    t=a,a=b,b=t;
    if(b<c)
    t=b,b=c,c=t;
    if(a<c)
    t=a,a=c,c=t;
    printf("%.2lf %.2lf %.2lf",a,b,c);
    return 0;
}
