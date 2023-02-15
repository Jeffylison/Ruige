#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    char b;
    scanf("%d %c",&a,&b);
    if(b=='y')
    {
        if(a<=1000) printf("9");
        else
        {
            if(a%500==0) printf("%d",9+(a-1000)/500*3);
            else printf("%d",12+(a-1000)/500*3);
        }
    }
    if(b=='n')
    {
        if(a<=1000) printf("4");
        else
        {
            if(a%500==0) printf("%d",4+(a-1000)/500*3);
            else printf("%d",7+(a-1000)/500*3);
        }
    }
    return 0;
}
