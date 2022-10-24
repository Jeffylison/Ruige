#include<stdio.h>
int sum(i)
{
    double sum = 1;
    for (i; i > 1; i--)
        sum += 2;
    return sum;
}
int main()
{
    int i, j, n, m = 1;
    double t = 0;
    while (scanf("%d", &n) != EOF)
    {
        t = 0; m = 1;
        for (i = 1; i <= n; i++) {
            t = t + 4 / (m * (double)sum(i));
            m = -m;
        }
        printf("%.10lf\n", t);
    }
    return 0;
}
