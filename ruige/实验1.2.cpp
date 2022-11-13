//SY1.2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int n=0;
    scanf(" %c",&a);
    n=a-'0';
    scanf(" %c",&a);
    n=n*10+a-'0';
    scanf(" %c",&a);
    n=n*10+a-'0';
    printf("%d",n);
    return 0;
}
