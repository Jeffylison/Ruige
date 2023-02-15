#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char a;
    int b=0;
    scanf(" %c",&a);
    b=a-'0';
    scanf(" %c",&a);
    b=b*10+a-'0';
    scanf(" %c",&a);
    b=b*10+a-'0';
    printf("%d",b);
    return 0;
}
