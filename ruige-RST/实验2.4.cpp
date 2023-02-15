#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int hh1,hh2,mm1,mm2;
    scanf("%d %d",&hh1,&hh2);
    mm1=hh1-hh1/100*100;
    mm2=hh2-hh2/100*100;
    hh1=hh1/100;
    hh2=hh2/100;
    if(mm2<mm1)
        mm2+=60,hh2-=1;
    printf("%02d:%02d",hh2-hh1,mm2-mm1);
    return 0;
}
