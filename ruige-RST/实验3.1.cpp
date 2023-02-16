#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,d;
    a=b=c=d=0;
    char n;
    while(scanf("%c",&n)!=EOF)
    {
        if((n>='a'&&n<='z')||(n>='A'&&n<='Z')) a++;
        else if(n>='0'&&n<='9') b++;
        else if(n==' ') c++;
        else d++;
    }
    printf("num1=%d,num2=%d,num3=%d,num4=%d",a,b,c,d);
    return 0;
}
