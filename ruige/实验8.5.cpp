//SY8.5
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int cube(n)
{
    int m;
    m = pow(n, 3);
    return m;
}
int main()
{
    int n, s;
    scanf("%d", &n);
    s = cube(n);
    printf("%d\n", s);
    return 0;
}