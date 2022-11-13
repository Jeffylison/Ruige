//ZY3.1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,sum=0,t,i;
    scanf("%d",&a);
    for(t=1;t<=a;t++)
    {
        for(i=1;i<=a;i++)
            if(t*i==a)
            sum=sum+t+i;
    }
    sum/=2;
    printf("%d\n",sum);
    return 0;
}
