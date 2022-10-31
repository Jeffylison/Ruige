//SY8.2
#include <stdio.h>
#include <stdlib.h>
int math(n)
{
    int a = 1;
    while (n >= 10)
    {
        n /= 10;
        a++;
    }
    return a;
}
int main()
{
    int n, i, s;
    scanf("%d", &n);
    s = math(n);
    printf("%d", s);
    return 0;
}
