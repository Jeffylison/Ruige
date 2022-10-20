//ZY5.2
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j;
    double a[100], sum, t;
    while (scanf("%lf", &a[0]) != EOF)
    {
        sum = 0;
        for (i = 1; i < 10; i++)
            scanf("%lf", &a[i]);
        for (i = 0; i < 9; i++)
            for (j = 0; j < 9 - i; j++)
                if (a[j] > a[j + 1])
                    t = a[j], a[j] = a[j + 1], a[j + 1] = t;
        for (i = 1; i < 9; i++)
            sum += a[i];
        sum = sum / 8;
        printf("%.3lf\n", sum);
    }
    return 0;
}
