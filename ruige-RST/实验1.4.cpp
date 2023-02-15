#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    b=pow(a/100,3)+pow(a/10%10,3)+pow(a%10,3);
    printf("%d",b);
    return 0;
}
