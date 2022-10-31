//SY8.1
#include <stdio.h>
#include <stdlib.h>
double sum(i)
{
    int sum = 0, j;
    for (j = 1; j <= i; j++)
        sum += j;
    return sum;
}
int main()
{
    int a, i, n;
    double s = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        s = s + 1 / (double)sum(i);
    printf("s=%lfd", s);
    return 0;
}
