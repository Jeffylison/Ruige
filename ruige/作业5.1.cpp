//ZY5.1
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100], b[100], i, j, n, max;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            b[i] = 0;
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                if (i + 1 == a[j])
                    b[i]++;
        max = b[0];
        for (i = 0; i < n; i++)
            if (b[i] > max)
                max = b[i];
        for (i = 0; i < n; i++)
            if (max == b[i])
                printf("%d ", i + 1);
        printf("\n");
    }
    return 0;
}
