//SY5.4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    double a[100], t;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%lf", &a[i]);
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - 1 - i; j++)
            {
                if (a[j] < a[j + 1])
                    t = a[j], a[j] = a[j + 1], a[j + 1] = t;
            }
        for (i = 0; i < n; i++)
            printf("%.2lf ", a[i]);
        printf("\n");
    }

    return 0;
}