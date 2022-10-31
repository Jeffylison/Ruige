//SY8.4
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int calc(a, b, c)
{
    int v;
    v = a * b * c;
    return v;
}
int main()
{
    int a, b, c, v;
    scanf("%d%d%d", &a, &b, &c);
    v = calc(a, b, c);
    printf("%d %d %d %d", v, a * b, a * c, b * c);
    return 0;
}
