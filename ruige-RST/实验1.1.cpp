#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    a=a-'a'+'A';
    b=b-'a'+'A';
    printf("%c %c",a,b);
    return 0;
}
