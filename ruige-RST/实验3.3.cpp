#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,sum=0;
    for(i=1;i<=100;i++)
        if(i/10==6||i%10==6)
            sum+=i;
    printf("%d",sum);
    return 0;
}
