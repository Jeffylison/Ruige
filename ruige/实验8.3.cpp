//SY8.3
#include <stdio.h>
#include <stdlib.h>
int jeffy(n)
{
    int i, s = 1;
    for (i = 1; i < n; i++)
    {
        s *= i;
        printf("%d\n", s);
    }
    return s * n;
}
int main()
{
    int n, sum;
    scanf("%d", &n);
    sum = jeffy(n);
    printf("%d", sum);
    return 0;
}
