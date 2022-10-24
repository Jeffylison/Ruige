#include<stdio.h>
int sum(i)
{
    double sum = 1;
    for (i; i > 0; i--)
        sum = sum * i;
    return sum;
}
int main()
{
    int i, j, n;
    double e = 1;
    while (scanf("%d", &n) != EOF)
    {
        e = 1;
        for (i = 1; i < n; i++)
            e = e + 1 / (double)sum(i);
        printf("%.4lf", e);
        printf("\n");
    }
    return 0;
}
