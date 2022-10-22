//ZY6.1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[100][100], t = 0, i, j, n, m, max, min;
    while (scanf("%d%d", &m, &n) != EOF)
    {
        t = 0;
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < m; i++)
        {
            max = a[i][0];
            for (j = 0; j < n; j++)
                if (a[i][j] > max)
                    max = a[i][j];
            a[i][n] = max;
        }
        for (j = 0; j < n; j++)
        {
            min = a[0][j];
            for (i = 0; i < m; i++)
                if (a[i][j] < min)
                    min = a[i][j];
            a[m][j] = min;
        }
        //for(i=0;i<=m;i++){
        //  for(j=0;j<=n;j++)
        //    printf("%d ",a[i][j]);
        //printf("\n");}
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                if (a[i][n] == a[m][j]) {
                    printf("%d %d %d", i + 1, j + 1, a[i][j]);
                    t = 1;
                    printf("\n");
                }
        if (t == 0)
            printf("No\n");
    }
    return 0;
}
