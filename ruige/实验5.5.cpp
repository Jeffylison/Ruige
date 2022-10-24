#include<stdio.h>
int main()
{
    int a[100], i, t, max, n;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
        max = a[0], t = 0;
        for (i = 0; i < n; i++) {
            if (max < a[i])
                max = a[i], t = i + 1;
        }
        printf("%d\n", t);
    }
    return 0;
}
