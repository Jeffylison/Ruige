//SY6.2
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100][100], i, j, n;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            for (j = 0; j <= i; j++)
                a[i][j] = 1;
        for (i = 2; i < n; i++)
            for (j = 1; j <= i; j++)
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        for (i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
                printf("%3d ", a[i][j]);
            printf("\n");
        }
    }
    return 0;
}
