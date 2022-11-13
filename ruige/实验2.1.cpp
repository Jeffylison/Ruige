//SY2.1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<400)
        printf("%d",a);
    if(a>=400&&a<800)
        printf("%d",a=a-100);
    if(a>=800&&a<1200)
        printf("%d",a=a-250);
    if(a>=1200)
        printf("%d",a=a-400);
    return 0;
}
