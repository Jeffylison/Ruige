//SY9.3
#include <stdio.h>
int Found(int* a, int n, int key)
{
    int i, m = 0;
    for (i = 0; i < n; i++)
        if (a[i] == key) {
            return i + 1;
        }
    if (m == 0) return -1;
}
int main()
{
    int i, n, key;
    int a[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    scanf("%d", &key);
    int x = Found(a, n, key);
    printf("%d", x);
    return 0;
}
