//SY9.4
#include <stdio.h>
#include <string.h>
void move(int* a)
{
    int i;
    for (i = 0; i < 2; i++)
        a[i + 5] = a[i];
    for (i = 2; i < 7; i++)
        printf("%d ", a[i]);
}
int main()
{
    int i;
    int a[100];
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    move(a);
    return 0;
}
