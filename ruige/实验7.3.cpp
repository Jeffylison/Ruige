//SY7.3
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[50];
    int i, j, m = 0;
    while (scanf("%s", a) != EOF)
    {
        m = 0;
        for (i = 0; a[i] != '\0'; i++)
            if (a[i] == '*')
                m++, a[i] = a[i] - '*' + '#';
        printf("%d %s", m, a);
        printf("\n");
    }
    return 0;
}
