//SY5.3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], i, n;
    while (scanf("%d", &n) != EOF)
    {
        a[0] = 0;
        a[1] = 1;
        for (i = 2; i <= n; i++)
            a[i] = a[i - 1] + a[i - 2];
        printf("%d", a[n]);
        printf("\n");
    }
    return 0;
}
