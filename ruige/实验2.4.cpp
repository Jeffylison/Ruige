//SY2.4
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hh,mm,x,y;
    char a=':';
    scanf(" %d %d",&x,&y);

    if(y-y/100*100>=x-x/100*100)
    {
        hh=y/100-x/100;
        mm=y-y/100*100-(x-x/100*100);
    }
    else
    {
        hh=y/100-x/100-1;
        mm=y-y/100*100+60-(x-x/100*100);
    }
    printf("%02d%c%02d",hh,a,mm);
    return 0;
}
