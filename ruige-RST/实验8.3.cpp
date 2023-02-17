#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int ba(n)
{
    int i,m=1;
    for(i=1;i<=n;i++)
    {
        m*=i;
        printf("%d\n",m);
    }
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
        ba(n);
    return 0;
}
