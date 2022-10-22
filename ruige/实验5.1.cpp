//SY5.1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20], i, x, n, m, b;
    a[20] = 0;
    while (scanf("%d %d", &n, &x) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            if (x >= a[i])
            {
                n += 1; m = n;
                for (n; n > i; n--)
                {
                    a[n] = a[n - 1];
                }
                a[i] = x;
            }
        for (i = 0; i <= m - 1; i++)
            printf("%d ", a[i]);
        printf("\n");
    }
    return 0;
}
