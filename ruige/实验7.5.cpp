#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    int i, q = 0, w = 0, e = 0, r = 0;
    while (scanf("%s", a) != EOF)
    {
        q = w = e = r = 0;
        if (strlen(a) >= 8)
            for (i = 0; a[i] != '\0'; i++) {
                if (a[i] >= 'a' && a[i] <= 'z') q = 1;
                else if (a[i] >= '0' && a[i] <= '9') w = 1;
                else if (a[i] >= 'A' && a[i] <= 'Z') e = 1;
                else r = 1;
            }
        if (q + w + e + r >= 3)
            printf("Yes");
        else printf("No");
        printf("\n");
    }
    return 0;
}
