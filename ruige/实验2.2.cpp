//SY2.2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b;
    char x;
    scanf("%c %lf",&x,&a);
    switch(x)
    {
        case'A':printf("%.2lf",b=a*19.99);break;
        case'B':printf("%.2lf",b=a*17.99);break;
        case'C':printf("%.2lf",b=a*15.99);break;
        case'D':printf("%.2lf",b=a*11.99);break;
        default:printf("No available.");
    }
    return 0;
}
