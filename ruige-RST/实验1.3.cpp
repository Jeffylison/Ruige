#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",a/100+a/10%10+a%10);
    return 0;
}
