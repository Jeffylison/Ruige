#include <stdio.h>
int main()
{
    int a[100][100], i, j, n, m, b[100][100];
    while (scanf("%d%d", &m, &n) != EOF)
    {
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; i++)
            for (j = 0; j < m; j++)
                b[i][j] = a[j][i];
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++)
                printf("%d ", b[i][j]);
            printf("\n");
        }

    }
    return 0;
}
