#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char names[30][30], t[30];
    int i, j, n, grades[30];
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++)
            scanf("%s %d", &names[i], &grades[i]);
        scanf("%s", &t);
        for (i = 0; i < n; i++)
            if (strcmp(t, names[i]) == 0)
                printf("%d", grades[i]);
        printf("\n");
    }
    return 0;
}
