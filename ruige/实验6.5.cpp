#include<stdio.h>
int main()
{
    int a[100][100], i, j, n, m;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (a[i][j] % 7 == 0)
                    printf("%d %d %d\n", i + 1, j + 1, a[i][j]);
    }
    return 0;
}
