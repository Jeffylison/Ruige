#include <stdio.h>
int main()
{
    int a[100][100], i, j, n, t = 1;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                scanf("%d", &a[i][j]);
        for (i = 0; i < n; i++)
            for (j = t; j < n; j++)
                if (a[i][j] == 0)
                    t++;
        if (t == n)
            printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}
