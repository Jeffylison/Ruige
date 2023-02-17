#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
double de(int m)
{
    int i,j=0;
    double sum=0;
    for(i=1; i<=m; i++)
    {
        j+=i;
        sum+=1/(double)j;
    }
    return sum;
}
int main()
{
    int n;
    double s;
    scanf("%d",&n);
    s=de(n);
    printf("s=%lf",s);
    return 0;
}
