//SY9.1
#include <stdio.h>

int lengthOfLastWord(const char* s)
{
    int a = 0, i, j;
    for (i = 0; s[i] != '\0'; i++) {
        a++;
        if (s[i + 1] == ' ')
            a = 0, i++;
        if (s[i + 1] == '\0')
            break;
    }
    return a;
}

int main()
{
    char str[1024];
    gets(str);
    int length = lengthOfLastWord(str);
    printf("%d\n", length);

    return 0;
}
