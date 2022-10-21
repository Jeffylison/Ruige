#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char names[30][30], t[30];
    int i, j, n;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%s", names[i]);
        for (i = 0; i < n - 1; i++)
            for (j = 0; j < n - i - 1; j++)
                if (strcmp(names[j], names[j + 1]) > 0)
                {
                    strcpy(t, names[j]);
                    strcpy(names[j], names[j + 1]);
                    strcpy(names[j + 1], t);
                }
        for (i = 0; i < n; i++)
            printf("%s ", names[i]);
        printf("\n");
    }
    return 0;
}
